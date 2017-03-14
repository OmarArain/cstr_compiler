### Program preamble
.file	 "program.c"
.text
.data

global_0:
	 .string	 ""
	 .zero	 512
global_1:
	 .string	 ""
	 .zero	 512
### Function preamble
.globl	 main
.type	 main,@function
main:
### FunctionDef reset bp
	pushq	 %rbp
	movq	 %rsp, %rbp
### FunctionDef get params
### FunctionDef allocate space for lcls
	subq	 $24, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### Assignment eval expr
### Constant push const
	pushq	 $45000
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### Assignment eval expr
### UnaryOp, eval expression
### Constant push const
	pushq	 $123
### UnaryOp, pop to rax, apply operator, push
	popq	 %rax
	negq	 %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
### Assignment eval expr
### Constant push const
	pushq	 $43
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -24(%rbp)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	imulq	 %rcx, %rax
	pushq	 %rax
### Constant push const
	pushq	 $100
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cqto
	idivq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	imulq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cqto
	xorq	 %rdx, %rdx
	idivq	 %rcx, %rax
	movq	 %rdx, %rax
	pushq	 %rax
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	subq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	salq	 %cl, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	subq	 %rcx, %rax
	pushq	 %rax
### Constant push const
	pushq	 $2
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	sarq	 %cl, %rax
	pushq	 %rax
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cqto
	idivq	 %rcx, %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### Return, eval expressions
### Constant push const
	pushq	 $0
### Return restore registers
	movq	 -64(%rbp),%r15
	movq	 -56(%rbp),%r14
	movq	 -48(%rbp),%r13
	movq	 -40(%rbp),%r12
	movq	 -32(%rbp),%rbx
### Return, put top of stack in rax
	popq	 %rax
### Return restore rbp, return
	leave
	ret
# ###Program epilogue
