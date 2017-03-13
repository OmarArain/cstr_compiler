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
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	imulq	 %rcx, %rax
	pushq	 %rax
### Constant push const
	pushq	 $100
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cqto
	idivq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	imulq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cqto
	xorq	 %rdx, %rdx
	idivq	 %rcx, %rax
	movq	 %rdx, %rax
	pushq	 %rax
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	subq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	salq	 %cl, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing k to stack
	pushq	 -24(%rbp)
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	subq	 %rcx, %rax
	pushq	 %rax
### Constant push const
	pushq	 $2
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	sarq	 %cl, %rax
	pushq	 %rax
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cqto
	idivq	 %rcx, %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
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
