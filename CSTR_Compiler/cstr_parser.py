#import ply.yacc as yacc
import ply_lib.yacc as yacc
import logging
from cstr_lexer import CSTR_Lexer
from cstr_ast import *
from argparse import ArgumentParser
from cstr_symtab import *
from cstr_codewriter import *
from os.path import split, splitext, join

LOG_FORMAT = '%(filename)s:%(funcName)s: %(message)s'
LOG_LEVEL = logging.INFO

class CSTR_Parser:
    def __init__(self):
        self.logger = logging.getLogger('CSTR_Compiler.CSTR_Parser')
        self.cstr_lexer = CSTR_Lexer()
        self.cstr_lexer.build()
        self.tokens = self.cstr_lexer.tokens
        self.cstr_parser = yacc.yacc(module=self)
        self.symbol_table = CSTR_SymbolTable()
        self.current_token = None
        self.current_type = ''
        self.current_scope_name = ''
        self.current_num_locals = 0

    def parse(self, text):
        self.symbol_table_stack = [dict()]
        self.current_token = None
        return self.cstr_parser.parse(input=text)

#### GRAMMAR SPECIFICATION ######################################
    # precedence = (
        # ('left', 'THEN'),
        # ('left', 'ELSE')
        # )
    def p_program_1(self, p):
        'program : external_declaration'
        p[0] = Program(declarations=[p[1]])

    def p_program_2(self, p):
        'program : program external_declaration'
        p[1].declarations.extend([p[2]])
        p[0] = p[1]

    def p_external_declaration_1(self, p):
        'external_declaration : declaration'
        p[0] = p[1]

    def p_external_declaration_2(self, p):
        'external_declaration : EXTERN declaration'
        #### ?????
        p[0] = p[2]

    def p_external_declaration_3(self, p):
        'external_declaration : function_definition'
        p[0] = p[1]


    def p_function_definition(self, p):
        'function_definition : type function_declarator decl_glbl_fct compound_instruction'
        ### Here is where we would START to write the code
        ## also assign type to function declarator
        ## add params to symbol table - not sure if this is correct scope
        ## make sure to check
        funcdecl = p[2]
        _type = p[1]
        self.logger.debug("hi")
        statements = p[4]
        # self.logger.debug(p[4])
        funcdecl._type = _type
        # funcname = funcdecl.name
        
        # symrec_plist = []
        # symrec_ptypes = []
        # param_list = funcdecl.parameters
        # for param in param_list:
        #     p_name = param.name
        #     p_type = param.type
        #     symrec_plist.append(p_name)
        #     symrec_ptypes.append(p_type)
        #     symrec = SymbolRecord(name=p_name, kind='variable', _type=p_type)
        #     self.symbol_table.add_symbol(p_name, symrec)

        # funcrec = SymbolRecord(name=funcname, _type=_type, kind='function',
        #                      param_list=symrec_plist, param_types=symrec_ptypes)
        # self.symbol_table.add_symbol(name=funcname, symbol_record=funcrec)
        nlcls = self.current_num_locals
        p[0] = FunctionDef(funcdecl=funcdecl, statements=statements, numlcls=nlcls)
        self.current_num_locals = 0
        # self.logger.debug(p[0].statements)
        # self.logger.debug(p[0].statements.statements)
        self.logger.debug(funcdecl.parameters)
    def p_decl_gbl_fct(self, p):
      'decl_glbl_fct : '
      ### WHAT GOES HERE??
      pass

    def p_declaration(self, p):
        'declaration : type declarator_list SEMICOLON'
        ### ASSIGN TYPES AND ADD TO SYMBOL TABLE HERE.
        ### ALSO DO TYPE CHECKING
        ### Techniclly, shouldn'y be used for functions

        _type = p[1]
        decl_list = p[2].statements
        for decl in decl_list:
            decl._type = _type

            # name = decl.name
            # if isinstance(decl, FunctionDecl):
            #     kind = 'function'
            #     symrec_param_names = []
            #     symrec_param_types = []
            #     decl_param_list = decl.parameters
            #     for param in decl_param_list:
            #         symrec_param_names.append(param.name)
            #         symrec_param_types.append(param.type)
            #     symrec = SymbolRecord(name=name, _type=_type, kind=kind, var_num=0,
            #                             param_list=symrec_param_names, 
            #                             param_types=symrec_param_types)
            #     self.symbol_table.add_symbol(name=name,symbol_record=symrec)
            # if isinstance(decl, IdentDecl):
            #     kind = 'variable'
            #     symrec = SymbolRecord(name=name, kind=kind, _type=type)
            #     self.symbol_table.add_symbol(name=name, symbol_record=symrec)
        p[0] = p[2]

    def p_type_1(self, p):
        """
        type : INT
             | STRING
        """
        self.current_type = p[1]
        p[0] = p[1]

    def p_declarator_list_1(self, p):
        'declarator_list : declarator'
        p[0] = StatementList(statements=[p[1]])
        self.logger.debug(p[0].statements)

    def p_declarator_list_2(self, p):
        'declarator_list : declarator_list COMMA declarator'
        p[1].statements.append(p[3])
        p[0] = p[1]
        self.logger.debug(p[0].statements)

    def p_declaration_list_1(self, p):
        'declaration_list : declaration'
        p[0] = p[1]
        self.logger.debug(p[0].statements)

    def p_declaration_list_2(self, p):
        'declaration_list : declaration_list declaration'
        p2s = p[2].statements
        if isinstance(p2s, list):
            p[1].statements.extend(p[2].statements)
        else:
            p[1].statements.append(p[2].statements)
        p[0] = p[1]
        self.logger.debug(p[0].statements)

    def p_declarator_1(self, p):
        'declarator : IDENT'

        _type = self.current_type
        name = p[1]
        p[0] = IdentDecl(name=p[1], _type = _type)
        kind = 'variable'
        symrec = SymbolRecord(name=name, kind=kind, _type=_type)
        self.symbol_table.add_symbol(name=name, symbol_record=symrec)        
        self.logger.debug(p[0])

    def p_declarator_2(self, p):
        'declarator : function_declarator'
        p[0] = p[1]

    def p_function_declarator_1(self, p):
        'function_declarator : IDENT LPARENS RPARENS'
        
        _type = self.current_type
        # print("FunctionDecl %s"%(p[1]))
        plist = ParamList(parameters=[])
        p[0] = FunctionDecl(name=p[1], parameters=plist, _type=_type)
        kind = 'function'
        symrec_param_names = []
        symrec_param_types = []
        symrec = SymbolRecord(name=p[1], _type=_type, kind=kind, var_num=0,
                                param_list=symrec_param_names, 
                                param_types=symrec_param_types)
        self.symbol_table.add_symbol(name=p[1],symbol_record=symrec)
        self.current_scope_name = p[1]

    def p_function_declarator_2(self, p):
        'function_declarator : IDENT LPARENS parameter_list RPARENS'
        _type = self.current_type
        p[0] = FunctionDecl(name=p[1], parameters=p[3], _type=_type)
        # print("FunctionDecl %s"%(p[1]))
        kind = 'function'
        symrec_param_names = []
        symrec_param_types = []
        decl_param_list = p[3].parameters
        for param in decl_param_list:
            symrec_param_names.append(param.name)
            symrec_param_types.append(param.type)

        symrec = SymbolRecord(name=p[1], _type=_type, kind=kind, var_num=0,
                                param_list=symrec_param_names, 
                                param_types=symrec_param_types)
        self.symbol_table.add_symbol(name=p[1],symbol_record=symrec)
        self.current_scope_name=p[1]
    def p_parameter_list_1(self, p):
        """
        parameter_list : parameter_declaration
        """
        p[0] = ParamList(parameters=[p[1]])
        
    def p_parameter_list_2(self, p):
        """
        parameter_list : parameter_list COMMA parameter_declaration
        """
        p[1].parameters.append(p[3])
        p[0] = p[1]

    def p_parameter_declaration(self, p):
        """
        parameter_declaration : type IDENT
        """
        # symrec = SymbolRecord(name=p[2], _type=p[1], kind='variable')
        # self.symbol_table.add_symbol(name=p[2], symbol_record=symrec)
        p[0] = Parameter(name=p[2], type=p[1])

        
    def p_instruction_1(self, p):
        """
        instruction : SEMICOLON
                    | compound_instruction
                    | expression_instruction
                    | iteration_instruction
                    | select_instruction
                    | jump_instruction
        """
        if (p[1] != ';'):
            p[0] = p[1]
        logger.debug(p[0])

    def p_expression_instruction1(self, p):
        """
        expression_instruction : expression SEMICOLON
                               | assignment SEMICOLON
        """
        p[0] = p[1]
        logger.debug(p[0])
      
    def p_assignment(self, p):
        """
        assignment : IDENT ASSIGNMENT expression
        """
        name = p[1]
        symrec = self.symbol_table.lookup_symbol(name)
        if symrec is not None:
            _type = symrec.type
            offset = symrec.var_num
            _ident = Ident(name=name, offset=offset, _type=_type)
            p[0] = Assignment(lhs=_ident, rhs=p[3])
        else:
            self.logger.error("ERROR, symbol not found")
        self.logger.debug(p[0])
      
    def p_compound_instruction_1(self, p):
        """
        compound_instruction : block_start declaration_list instruction_list block_end
        """
        p[0] = Compound(statements=p[2].statements+p[3].statements)
        self.logger.debug(p[0].statements)
      
    def p_compound_instruction_2(self, p):
        """
        compound_instruction : block_start declaration_list block_end
                             | block_start instruction_list block_end
        """
        p[0] = Compound(statements=p[2].statements)
        self.logger.debug(p[0].statements)

    def p_compound_instruction_4(self, p):
        'compound_instruction : block_start block_end'
        p[0] = Compound(statements=[])
        self.logger.debug(p[0].statements)
      
    def p_block_start(self, p):
        'block_start : LBRACKET'
        self.symbol_table.enter_new_scope()
        ## add function parameters to scope
        symrec = self.symbol_table.lookup_symbol(self.current_scope_name)
        param_list = symrec.param_list
        param_types = symrec.param_types

        i=0
        for p in param_list:
            t = param_types[i]
            symrec = SymbolRecord(name=p, _type=t, kind='variable')
            self.symbol_table.add_symbol(p, symrec)
            i+=1
        # self.current_num_locals = self.symbol_table.current_num_vars

    def p_block_end(self, p):
        'block_end : RBRACKET'
        self.current_num_locals = self.symbol_table.current_num_vars
        self.symbol_table.leave_scope()

        
    def p_instruction_list1(self, p):
        'instruction_list : instruction'

        p[0] = StatementList(statements=[p[1]])

    def p_instruction_list2(self, p):
        'instruction_list : instruction_list instruction'
        if p[2] is not None:
            p[1].statements.append(p[2])
        p[0] = p[1]

    def p_select_instruction_1(self, p):
        'select_instruction  : cond_instruction instruction'
        p[0] = If(condition=p[1], _true=p[2], _false=None)

    def p_select_instruction_2(self, p):
        'select_instruction  : cond_instruction instruction ELSE instruction'
        p[0] = If(condition=p[1], _true=p[2], _false=p[4])

    def p_cond_instruction(self, p):
        """
        cond_instruction  : IF LPARENS condition RPARENS
        """
        p[0] = p[3]
    def p_iteration_instruction_1(self, p):
        """
        iteration_instruction : WHILE LPARENS condition RPARENS instruction
        """
        p[0] = While(condition=p[3], statement=p[5])
        
    def p_iteration_instruction_2(self, p):
        """
        iteration_instruction : DO instruction WHILE LPARENS condition RPARENS
        """
        p[0] = DoWhile(condition=p[5], statement=p[2])

    def p_iteration_instruction_3(self, p):
        """
        iteration_instruction : FOR LPARENS assignment SEMICOLON condition SEMICOLON assignment RPARENS instruction
        """
        p[0] = For(initial=p[3], condition=p[5], 
                   _next=p[7], statement=p[9])

    def p_jump_instruction(self, p):
        """
        jump_instruction  : RETURN expression SEMICOLON
        """
        p[0] = Return(expression=p[2])
        
    def p_condition(self, p):
        """
        condition : expression comparison_operator expression
        """
        ## condition is essentially a binary op that should
        ## evaulate to 0 or 1
        p[0] = BinaryOp(operator=p[2], lhs=p[1], rhs=p[3])

    def p_comparison_operator_1(self, p):
        """
        comparison_operator : EQUAL
                            | NOTEQUAL
                            | LESS
                            | GREATER
                            | LESSEQUAL
                            | GREATEREQUAL
        """
        p[0] = p[1]

    def p_expression_1(self, p):
        'expression  : expression_additive'
        p[0] = p[1]

    def p_expression_2(self, p):
        """
        expression : expression SHIFTLEFT expression_additive
                   | expression SHIFTRIGHT expression_additive
        """
        p[0] = BinaryOp(operator=p[2], lhs=p[1], rhs=p[3])

    def p_expression_additive_1(self, p):
        """
        expression_additive : expression_multiplicative
        """
        p[0] = p[1]

    def p_expression_additive_2(self, p):
        """
        expression_additive : expression_additive ADD expression_multiplicative
                            | expression_additive SUBTRACT expression_multiplicative
        """
        p[0] = BinaryOp(operator=p[2], lhs=p[1], rhs=p[3])

    def p_expression_multiplicative_1(self, p):
        'expression_multiplicative : unary_expression'
        p[0] = p[1]

    def p_expression_multiplicative_2(self, p):
        """
        expression_multiplicative : expression_multiplicative MULTIPLY unary_expression
                                  | expression_multiplicative DIVIDE unary_expression
                                  | expression_multiplicative MODULO unary_expression
        """
        p[0] = BinaryOp(operator=p[2], lhs=p[1], rhs=p[3])

    def p_unary_expression_1(self, p):
        'unary_expression : postfix_expression'
        p[0] = p[1]

    def p_unary_expression_2(self, p):
        'unary_expression : SUBTRACT unary_expression'
        p[0] = UnaryOp(operator=p[1], expression=p[2])

    def p_postfix_expression_1(self, p):
        'postfix_expression : primary_expression'
        p[0] = p[1]

    def p_postfix_expression_2(self, p):
        'postfix_expression : IDENT LPARENS argument_expression_list RPARENS'
        p[0] = FunctionCall(name=p[1], args=p[3])

    def p_postfix_expression_3(self, p):
        'postfix_expression : IDENT LPARENS RPARENS'
        ##function call
        p[0] = FunctionCall(name=p[1], args=[])
        

    def p_argument_expression_list_1(self, p):
        'argument_expression_list : expression'
        p[0] = ExpressionList(expressions=[p[1]])
        #self.logger.debug(p[0])

    def p_argument_expression_list_2(self, p):
        'argument_expression_list : argument_expression_list COMMA expression'
        
        self.logger.debug(p[3])
        p[1].expressions.append(p[3])
        p[0] = p[1]

    def p_primary_expression_1(self, p):
        'primary_expression : IDENT'
        #symrec = self.symbol_table.l
        name = p[1]
        symrec = self.symbol_table.lookup_symbol(name)
        if symrec is not None:
            offset = symrec.var_num
            _type = symrec.type
        else:
            offset=-1
        p[0] = Ident(name=p[1], offset=offset, _type=_type)
        ###LOOKUP IDENT and OFFSET of IDENT
        #self.logger.debug(p[0])

    def p_primary_expression_2(self, p):
        'primary_expression : CONST_INT'
        p[0] = p[1]
        p[0] = Constant(_type='int', value=p[1])
        #self.logger.debug(p[0])

    def p_primary_expression_3(self, p):
        """
        primary_expression : CONST_STRING
        """
        p[0] = Constant(_type='string', value=p[1])
        #self.logger.debug(p[0])

    def p_primary_expression_4(self, p):
        """
        primary_expression : LPARENS expression RPARENS
        """
        p[0] = p[2]
        #self.logger.debug(p[0])

    # Error rule for syntax errors
    def p_error(self, p):
        self.logger.error("Syntax error in input!")
        # print(p)

def initialize_logger(fmt, level):
    logger = logging.getLogger('CSTR_Compiler')
    logger.setLevel(level)
    formatter = logging.Formatter(fmt)
    # fh = logging.FileHandler('JackCompiler.log')
    # fh.setFormatter(formatter)
    # fh.setLevel(logging.DEBUG)
    # logger.addHandler(fh)
    sh = logging.StreamHandler()
    sh.setFormatter(formatter)
    sh.setLevel(level)
    logger.addHandler(sh)
    logger.debug('Initializing logging.')
    return logger

if __name__ == '__main__':

        # parser arguments
    arg_parser = ArgumentParser(
        description="CSTR Compiler.  Takes a .cstr file and compiles it to a .s file.")
    arg_parser.add_argument('source', type=str,
        help='filepath of .cstr file',
        nargs='+')
    arg_parser.add_argument('--debug', help='print debug info', action='store_true')
    arg_parser.add_argument('--ast', help='Print AST', action='store_true')

    args = arg_parser.parse_args()

    if args.debug:
        LOG_LEVEL = logging.DEBUG

    source = args.source[0]
    logger = initialize_logger(LOG_FORMAT, LOG_LEVEL)
    logger.debug("Started Logging")
    # Build the parser

    s = '''

    int main() {
      int i;
      i = 0;
      while ( i < 10 ) {
        printd(i);
        i = i+2;
      }
      for ( i = -10; i <= 10; i = i+1 )
        printd(i);
      i = 0;
      do {
        printd(i);
        i = i-1;
      } while ( i >= -20 );
      return 0;
    }
    '''

    p, fn = split(source)
    fileroot, fileext = splitext(fn)
    outfiledir = 'asm'
    outfilename = join(outfiledir, fileroot + '.s')
    astdir = 'ast'

    with open(source, 'r') as myfile:
        text=myfile.read().replace('\n', '')
        parser = CSTR_Parser()
        result = parser.parse(text)
        if args.ast:
            result.show(attrnames=True, nodenames=True)
        codewriter = ASMWriter(outfilename)
        codewriter.visit(result)

