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
.globl	 fact
.type	 fact,@function
fact:
### FunctionDef reset bp
	pushq	 %rbp
	movq	 %rsp, %rbp
### FunctionDef get params
	pushq	 %rdi
### FunctionDef allocate space for lcls
	subq	 $8, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing n to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $1
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jle	IF_TRUE_0
	jmp	 IF_FALSE_0
IF_TRUE_0:
### Return, eval expressions
### Constant push const
	pushq	 $1
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
IF_FALSE_0:
### Return, eval expressions
### BinaryOp, eval lhs, then rhs
### Ident, pushing n to stack
	pushq	 -8(%rbp)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Ident, pushing n to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $1
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	subq	 %rcx, %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 fact
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	imulq	 %rcx, %rax
	pushq	 %rax
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
### Function preamble
.globl	 main
.type	 main,@function
main:
### FunctionDef reset bp
	pushq	 %rbp
	movq	 %rsp, %rbp
### FunctionDef get params
### FunctionDef allocate space for lcls
	subq	 $0, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $10
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 fact
### FunctionCall restore caller save registers
### FunctionCall handle result
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
	movq	 -40(%rbp),%r15
	movq	 -32(%rbp),%r14
	movq	 -24(%rbp),%r13
	movq	 -16(%rbp),%r12
	movq	 -8(%rbp),%rbx
### Return, put top of stack in rax
	popq	 %rax
### Return restore rbp, return
	leave
	ret
# ###Program epilogue
