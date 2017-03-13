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
	subq	 $8, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### Assignment eval expr
### Constant push const
	pushq	 $123
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### UnaryOp, eval expression
### Ident, pushing j to stack
	pushq	 -8(%rbp)
### UnaryOp, pop to rax, apply operator, push
	popq	 %rax
	negq	 %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### UnaryOp, eval expression
### Constant push const
	pushq	 $123
### UnaryOp, pop to rax, apply operator, push
	popq	 %rax
	negq	 %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### UnaryOp, eval expression
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $123
### Constant push const
	pushq	 $0
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### UnaryOp, pop to rax, apply operator, push
	popq	 %rax
	negq	 %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### UnaryOp, eval expression
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $0
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### UnaryOp, pop to rax, apply operator, push
	popq	 %rax
	negq	 %rax
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
	movq	 -48(%rbp),%r15
	movq	 -40(%rbp),%r14
	movq	 -32(%rbp),%r13
	movq	 -24(%rbp),%r12
	movq	 -16(%rbp),%rbx
### Return, put top of stack in rax
	popq	 %rax
### Return restore rbp, return
	leave
	ret
# ###Program epilogue
