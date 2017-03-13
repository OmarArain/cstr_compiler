from cstr_ast import *
import sys

import logging

class ASMWriter(NodeVisitor):
    def __init__(self, outfile=sys.stdout, infilename='program.c'):
        self.something = 0
        self.logger = logging.getLogger("CSTR_Compiler.ASMWriter")
        if outfile == sys.stdout:
            self.outfile = sys.stdout
        else:
            self.outfile = open(outfile, 'w')
        self.infilename = infilename
        ## registers where parameters are saved
        self.param_registers = ("%rdi",
                                "%rsi",
                                "%rdx",
                                "%rcx",
                                "%r8",
                                "%r9")

        self.caller_save_registers= ("%r10",
                                    "%r11")

        # rbp and rsp should also be saved, not included here
        self.callee_save_registers = ("%rbx",
                                      "%r12",
                                      "%r13",
                                      "%r14",
                                      "%r15")
        self.data_size = 8
        self._unique_labels = []
        self._labels = {}
        self.current_lcloffset = 0


    def generateUniqueLabel(self, label_prefix):
        """ generates a unique label based on the suffix provided
            i.e. IF_TRUE1, IF_TRUE2.  Also keeps track of labels used. 
        """ 

        if label_prefix in self._labels.keys():
            self._labels[label_prefix] +=1
            label = label_prefix + str(self._labels[label_prefix])
        else:
            self._labels[label_prefix] = 0
            label = label_prefix + '0'
        return label

    def close(self):
        if self.outfile != sys.stdout:
            self.outfile.close()
    def visit(self, node):
        super(ASMWriter,self).visit(node)

    def generic_visit(self, node):
        self.logger.debug("# No code to write this node "
                        + node.__class__.__name__)
        super(ASMWriter,self).generic_visit(node)

    def _write_push(self, register, offset=0):
        if offset != 0:
            self.outfile.write('\tpushq\t %s(%s)\n'%(offset, register))
        else:
            self.outfile.write('\tpushq\t %s\n'%(register))

    def _write_pop(self, register, offset=0):
        if offset!=0:
            self.outfile.write('\tpopq\t %s(%s)\n'%(offset, register))
        else:
            self.outfile.write('\tpopq\t %s\n'%(register))

    def _write_push_const(self, const):
        self.outfile.write('\tpushq\t $%s\n'%(const))
    def handle_rax(self):
        self.outfile.write('\tpushq\t %rax\n')

    def visit_Program(self, node):
        self.outfile.write("### Program preamble\n")

        self.outfile.write('.file\t "%s"\n'%(self.infilename))
        self.outfile.write('.text\n')


        super(ASMWriter,self).generic_visit(node)
        self.outfile.write("# ###Program epilogue\n")
    
    def visit_FunctionDef(self, node):
        ## get relevant variables
        funcname = node.funcdecl.name
        paramlist = node.funcdecl.parameters
        _type = node.funcdecl._type
        numlcls = node.numlcls

        self.outfile.write("### Function preamble\n")
        self.outfile.write('.globl\t %s\n'%(funcname))
        self.outfile.write('.type\t %s,@function\n'%(funcname))
        self.outfile.write('%s:\n'%(funcname))

        self.outfile.write('### FunctionDef reset bp\n')
        self.outfile.write("\tpushq\t %rbp\n")
        self.outfile.write("\tmovq\t %rsp, %rbp\n")

        self.outfile.write('### FunctionDef get params\n')
        rcount = 0
        for param in paramlist.parameters:
            pname = param.name
            ptype = param.type
            if rcount<=5:
                pregister = self.param_registers[rcount]
                self._write_push(register=pregister)
                #self.outfile.write("\tpushq\t %s\n"%(pregister))
            else:
                ## TODO: CHECK THIS, IT IS PROBABLY WRONG
                poffset = (rcount - 5) * self.data_size
                self._write_push(register='%rbp', offset= poffset)
                # self.outfile.write("\tpushq\t -%s(%rbp)\n"%(poffset))
            rcount+=1

        lcloffset = self.data_size*numlcls
        self.outfile.write("### FunctionDef allocate space for lcls\n") 
        self.outfile.write("\tsubq\t $%s, %%rsp\n"%(lcloffset))

        self.outfile.write('### FunctionDef save registers\n')
        for sregister in self.callee_save_registers:
            self._write_push(register=sregister)
            # self.outfile.write("\tpushq\t %s\n"%(sregister))
            lcloffset+=self.data_size

        self.current_lcloffset = lcloffset
        self.outfile.write('### FunctionDef Body, remember to clean stack\n')
        super(ASMWriter,self).generic_visit(node)

        # self.outfile.write('### FunctionDef restore registers\n')
        # for sregister in reversed(self.callee_save_registers):
        #     self.outfile.write("\tmovq\t -%s(%%rbp),%s\n"%(lcloffset,sregister))
        #     lcloffset-=self.data_size

        # self.outfile.write('### FunctionDef restore rbp, return\n')
        # self.outfile.write("\tmovq\t %rbp, %rsp\n")
        # self.outfile.write("\tpopq\t %rbp\n")
        ###might not need to do this
        #self.outfile.write("\tret\n")

    def visit_FunctionCall(self, node):
        ### get relevant variables
        funcname = node.name
        args = node.args.expressions
        numargs = len(args)

        self.outfile.write('### FunctionCall preamble\n')

        self.outfile.write('### FunctionCall evaluate args left to right, push onto stack\n')
        super(ASMWriter,self).generic_visit(node)       

        
        self.outfile.write('### FunctionCall pop args into param_registers, r to l\n')
        for current_arg_num in reversed(range(numargs)):
            if current_arg_num > 5:
                #leave it be, BUT THIS IS WRONG, NEED TO REVERSE ORDER!
                pass
            else:
                self._write_pop(self.param_registers[current_arg_num])


        self.outfile.write('### FunctionCall save caller save registers\n')
        ## IGNIRING THIS FOR NOW, I never use r10 and r11

        self.outfile.write('### FunctionCall call function\n')
        self.outfile.write("\tcall\t %s\n"%(funcname))


        self.outfile.write('### FunctionCall restore caller save registers\n')
        ## IGNIRING THIS FOR NOW, I never use r10 and r11


        self.outfile.write('### FunctionCall handle result\n')
        self.handle_rax()

    def visit_Constant(self, node):
        const = node.value
        _type = node._type

        self.outfile.write('### Constant push const\n')
        if _type == 'int':
            self._write_push_const(const)

        elif _type == 'string':
            ## handle string constant
            ## lookup string label
            ## push string label onto stack, i think
            pass

    def visit_Return(self, node):
        expr = node.expression
        lcloffset = self.current_lcloffset

        self.outfile.write('### Return, eval expressions\n')
        super(ASMWriter,self).generic_visit(node)

        self.outfile.write('### Return restore registers\n')
        for sregister in reversed(self.callee_save_registers):
            self.outfile.write("\tmovq\t -%s(%%rbp),%s\n"%(lcloffset,sregister))
            lcloffset-=self.data_size

        self.outfile.write('### Return, put top of stack in rax\n')
        self._write_pop('%rax')
        self.outfile.write('### Return restore rbp, return\n')
        # self.outfile.write("\tmovq\t %rbp, %rsp\n")
        # self.outfile.write("\tpopq\t %rbp\n")
        self.outfile.write("\tleave\n")
        self.outfile.write('\tret\n')

    def visit_Ident(self, node):
        name = node.name
        offset = node.offset * self.data_size * -1
        ### remember to skip this when doing assignment operator!
        self.outfile.write('### Ident, pushing %s to stack\n'%(name))
        self._write_push(register='%rbp',offset=offset)

    def visit_UnaryOp(self, node):
        op = node.operator

        self.outfile.write('### UnaryOp, eval expression\n')
        super(ASMWriter,self).generic_visit(node)

        self.outfile.write('### UnaryOp, pop to rax, apply operator, push\n')
        if op == '-':
            self._write_pop('%rax')
            self.outfile.write('\tnegq\t %rax\n')
            self.handle_rax()
        else:
            pass

    def visit_BinaryOp(self, node):
        ### WHEN I ADD STRINGSs, NEED TO ADD TYPE TO BINARY AND UNARY OP
        _type = 'int'
        op = node.operator
        self.outfile.write('### BinaryOp, eval lhs, then rhs\n')
        super(ASMWriter,self).generic_visit(node)

        self.outfile.write('### BinaryOp, push rhs, lhs into reg\n')
        self._write_pop('%rcx')
        self._write_pop('%rax')

        self.outfile.write('### perform op, push to stack\n')
        if _type == 'int':
            if op == '+':
                self.outfile.write('\taddq\t %rcx, %rax\n')
            elif op == '-':
                self.outfile.write('\tsubq\t %rcx, %rax\n')
            elif op == '/':
                self.outfile.write('\tcqto\n')
                self.outfile.write('\tidivq\t %rcx, %rax\n')
            elif op == '*':
                self.outfile.write('\timulq\t %rcx, %rax\n')
            elif op == '<<':
                self.outfile.write('\tsalq\t %cl, %rax\n')
            elif op == '>>':
                self.outfile.write('\tsarq\t %cl, %rax\n')
            elif op == '%':
                self.outfile.write('\tcqto\n')
                self.outfile.write('\txorq\t %rdx, %rdx\n')
                self.outfile.write('\tidivq\t %rcx, %rax\n')
                self.outfile.write('\tmovq\t %rdx, %rax\n')
            elif op == '<=':
                self.outfile.write('\tcmpq\t %rcx, %rax\n')
            elif op == '>=':
                self.outfile.write('\tcmpq\t %rcx, %rax\n')
            elif op == '<':
                self.outfile.write('\tcmpq\t %rcx, %rax\n')
            elif op == '>':
                self.outfile.write('\tcmpq\t %rcx, %rax\n')
            elif op == '!=':
                self.outfile.write('\tcmpq\t %rcx, %rax\n')
            elif op == '==':
                self.outfile.write('\tcmpq\t %rcx, %rax\n')
            else:
                pass
        self.handle_rax()
        pass

    def visit_Assignment(self, node):
        lhsoffset = node.lhs.offset * self.data_size * -1
        lhsname = node.lhs.name
        lhstype = node.lhs._type
        self.outfile.write("### Assignment eval expr\n")
        super(ASMWriter,self).generic_visit(node)

        self.outfile.write('### Assignment mov from stack to reg, assign to var\n')
        self._write_pop('%rax')
        self.outfile.write('\tmovq\t %%rax, %s(%%rbp)\n' %(lhsoffset))


    def visit_If(self, node):

        cond_nodelist = []
        true_nodelist = []
        false_nodelist = []
        comp_op = node.condition.operator
        iftrue_label = self.generateUniqueLabel('IF_TRUE_')
        iffalse_label = self.generateUniqueLabel('IF_FALSE_')
        if node.condition is not None: cond_nodelist.append(("condition", node.condition))
        if node._true is not None: true_nodelist.append(("_true", node._true))
        if node._false is not None: false_nodelist.append(("_false", node._false))
        ### eval conditions
        self.outfile.write("### If eval conditions\n")
        for nname, n in cond_nodelist:
            self.visit_BinaryOp(n)

        ## write the relvant jmp instruction to IFTRUE
        if comp_op == '==':
            self.outfile.write("\tje\t%s\n"%(iftrue_label))
        elif comp_op == '!=':
            self.outfile.write("\tjne\t%s\n"%(iftrue_label))
        elif comp_op == '<=':
            self.outfile.write("\tjle\t%s\n"%(iftrue_label))
        elif comp_op == '<':
            self.outfile.write("\tjl\t%s\n"%(iftrue_label))
        elif comp_op == '>=':
            self.outfile.write("\tjge\t%s\n"%(iftrue_label))
        elif comp_op == '>':
            self.outfile.write("\tjg\t%s\n"%(iftrue_label))
        else:
            self.outfile.write("\tjne\t%s\n"%(iftrue_label))
        
        ## write the jmp to IFFALSE
        self.outfile.write('\tjmp\t %s\n'%(iffalse_label))
        ## write IFTRUE label
        self.outfile.write('%s:\n'%(iftrue_label))
        ## eval _true expressions
        for nname, n in true_nodelist:
            super(ASMWriter,self).visit(n)        
        ## write IFFALSE label
        self.outfile.write('%s:\n'%(iffalse_label))
        ## eval IFFALSE (if none, make sure it works)
        for nname, n in false_nodelist:
            super(ASMWriter,self).visit(n)

    def visit_While(self, node):
        cond_nodelist = []
        loop_nodelist = []
        comp_op = node.condition.operator
        iftrue_label = self.generateUniqueLabel('WHILE_LOOP_')
        iffalse_label = self.generateUniqueLabel('END_WHILE_')
        if node.condition is not None: cond_nodelist.append(("condition", node.condition))
        if node.statement is not None: loop_nodelist.append(("_true", node.statement))

        ## write IFTRUE label
        self.outfile.write('%s:\n'%(iftrue_label))

        ### eval conditions
        self.outfile.write("### While eval conditions\n")
        for nname, n in cond_nodelist:
            self.visit_BinaryOp(n)

        ## write the relvant jmp instruction to IFFALSE, end loop
        if comp_op == '==':
            self.outfile.write("\tjne\t%s\n"%(iffalse_label))
        elif comp_op == '!=':
            self.outfile.write("\tje\t%s\n"%(iffalse_label))
        elif comp_op == '<=':
            self.outfile.write("\tjg\t%s\n"%(iffalse_label))
        elif comp_op == '<':
            self.outfile.write("\tjge\t%s\n"%(iffalse_label))
        elif comp_op == '>=':
            self.outfile.write("\tjl\t%s\n"%(iffalse_label))
        elif comp_op == '>':
            self.outfile.write("\tjle\t%s\n"%(iffalse_label))
        else:
            self.outfile.write("\tje\t%s\n"%(iffalse_label))
        
        ## eval loop body statements
        for nname, n in loop_nodelist:
            super(ASMWriter,self).visit(n)

        ## write the jmp to IFTRUE, loop to beginning
        self.outfile.write('\tjmp\t %s\n'%(iftrue_label))
        ## write IFFALSE label
        self.outfile.write('%s:\n'%(iffalse_label))
        ## eval IFFALSE (if none, make sure it works)

    def visit_DoWhile(self, node):
        cond_nodelist = []
        loop_nodelist = []
        comp_op = node.condition.operator
        iftrue_label = self.generateUniqueLabel('DO_WHILE_LOOP_')
        #iffalse_label = self.generateUniqueLabel('END_WHILE_')
        if node.condition is not None: cond_nodelist.append(("condition", node.condition))
        if node.statement is not None: loop_nodelist.append(("_true", node.statement))

        ## write IFTRUE label
        self.outfile.write('%s:\n'%(iftrue_label))

        ## eval loop body statements
        for nname, n in loop_nodelist:
            super(ASMWriter,self).visit(n)

        ### eval conditions
        self.outfile.write("### Do While eval conditions\n")
        for nname, n in cond_nodelist:
            self.visit_BinaryOp(n)

        ## write the relvant jmp instruction to IFTRUE
        if comp_op == '==':
            self.outfile.write("\tje\t%s\n"%(iftrue_label))
        elif comp_op == '!=':
            self.outfile.write("\tjne\t%s\n"%(iftrue_label))
        elif comp_op == '<=':
            self.outfile.write("\tjle\t%s\n"%(iftrue_label))
        elif comp_op == '<':
            self.outfile.write("\tjl\t%s\n"%(iftrue_label))
        elif comp_op == '>=':
            self.outfile.write("\tjge\t%s\n"%(iftrue_label))
        elif comp_op == '>':
            self.outfile.write("\tjg\t%s\n"%(iftrue_label))
        else:
            self.outfile.write("\tjne\t%s\n"%(iftrue_label))
    
    def visit_For(self, node):
        init_nodelist = []
        next_nodelist = []
        cond_nodelist = []
        loop_nodelist = []
        comp_op = node.condition.operator
        iftrue_label = self.generateUniqueLabel('FOR_LOOP_')
        iffalse_label = self.generateUniqueLabel('END_FOR_')
        if node.condition is not None: cond_nodelist.append(("condition", node.condition))
        if node.statement is not None: loop_nodelist.append(("_true", node.statement))
        if node.initial is not None: init_nodelist.append(("condition", node.initial))
        if node._next is not None: next_nodelist.append(("_true", node._next))


        #eval initial
        self.outfile.write("### For eval initial\n")
        for nname, n in init_nodelist:
            self.visit(n)

        ## write IFTRUE label
        self.outfile.write('%s:\n'%(iftrue_label))

        ### eval conditions
        self.outfile.write("### For eval conditions\n")
        for nname, n in cond_nodelist:
            self.visit_BinaryOp(n)

        ## write the relvant jmp instruction to IFFALSE, end loop
        if comp_op == '==':
            self.outfile.write("\tjne\t%s\n"%(iffalse_label))
        elif comp_op == '!=':
            self.outfile.write("\tje\t%s\n"%(iffalse_label))
        elif comp_op == '<=':
            self.outfile.write("\tjg\t%s\n"%(iffalse_label))
        elif comp_op == '<':
            self.outfile.write("\tjge\t%s\n"%(iffalse_label))
        elif comp_op == '>=':
            self.outfile.write("\tjl\t%s\n"%(iffalse_label))
        elif comp_op == '>':
            self.outfile.write("\tjle\t%s\n"%(iffalse_label))
        else:
            self.outfile.write("\tje\t%s\n"%(iffalse_label))
        
        ## eval loop body statements
        for nname, n in loop_nodelist:
            super(ASMWriter,self).visit(n)

        ## eval _next 
        for nname, n in next_nodelist:
            super(ASMWriter,self).visit(n)

        ## write the jmp to IFTRUE, loop to beginning
        self.outfile.write('\tjmp\t %s\n'%(iftrue_label))
        ## write IFFALSE label
        self.outfile.write('%s:\n'%(iffalse_label))
        ## eval IFFALSE (if none, make sure it works)        




