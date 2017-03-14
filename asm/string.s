### Program preamble
.file	 "program.c"
.text
.data

hello_label:
	 .string	 "hello"
	 .zero	 512
worldn_label:
	 .string	 " world\n"
	 .zero	 512
bye_label:
	 .string	 "bye"
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
	subq	 $16, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### Assignment eval expr
### Constant push const
	pushq	 $hello_label
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### Assignment eval expr
### Constant push const
	pushq	 $worldn_label
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
### Assignment eval expr
### Constant push const
	pushq	 $bye_label
### Assignment global
	popq	 %rax
	movq	 $global_1, %rcx
	movq	 %rax, (%rcx)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $hello_label
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
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $hello_label
### Constant push const
	pushq	 $worldn_label
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $worldn_label
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $hello_label
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing global u to stack
	pushq	 $global_1
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### BinaryOp, eval lhs, then rhs
### Ident, pushing global u to stack
	pushq	 $global_1
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing global u to stack
	pushq	 $global_1
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
### Return, eval expressions
### Constant push const
	pushq	 $0
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
