### Program preamble
.file	 "program.c"
.text
.data

n_label:
	 .string	 "\n"
	 .zero	 512
M_label:
	 .string	 "M"
	 .zero	 512
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
	subq	 $8, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### For eval initial
### Assignment eval expr
### Constant push const
	pushq	 $0
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
FOR_LOOP_0:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $1000
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jge	END_FOR_0
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $n_label
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 printf
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 sleep
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $27
### Constant push const
	pushq	 $M_label
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	addq	 %rcx, %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 printf
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $1
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
	jmp	 FOR_LOOP_0
END_FOR_0:
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
