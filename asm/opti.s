### Program preamble
.file	 "program.c"
.text
### Function preamble
.globl	 main
.type	 main,@function
main:
### FunctionDef reset bp
	pushq	 %rbp
	movq	 %rsp, %rbp
### FunctionDef get params
### FunctionDef allocate space for lcls
	subq	 $16, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $0
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $0
### Constant push const
	pushq	 $100
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	imulq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	je	IF_TRUE_0
	jmp	 IF_FALSE_0
IF_TRUE_0:
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $11
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $1
### Constant push const
	pushq	 $4
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	imulq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
IF_FALSE_0:
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $12
### Constant push const
	pushq	 $2
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### If eval conditions
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Constant push const
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### Constant push const
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	jne	IF_TRUE_1
	jmp	 IF_FALSE_1
IF_TRUE_1:
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Constant push const
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
IF_FALSE_1:
### For eval initial
### Assignment eval expr
### Ident, pushing a to stack
	pushq	 -8(%rbp)
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
FOR_LOOP_0:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $0
### Constant push const
	pushq	 $1
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	jle	END_FOR_0
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing a to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $1
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing b to stack
	pushq	 -16(%rbp)
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
	jmp	 FOR_LOOP_0
END_FOR_0:
### Return, eval expressions
### Ident, pushing a to stack
	pushq	 -8(%rbp)
### Return restore registers
	movq	 -56(%rbp),%r15
	movq	 -48(%rbp),%r14
	movq	 -40(%rbp),%r13
	movq	 -32(%rbp),%r12
	movq	 -24(%rbp),%rbx
### Return, put top of stack in rax
	popq	 %rax
### Return restore rbp, return
	leave
	ret
# ###Program epilogue
