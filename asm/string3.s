### Program preamble
.file	 "program.c"
.text
.data

_label:
	 .string	 ""
	 .zero	 512
hello_label:
	 .string	 "hello"
	 .zero	 512
world_label:
	 .string	 "world"
	 .zero	 512
global_0:
	 .string	 ""
	 .zero	 512
global_1:
	 .string	 ""
	 .zero	 512
### Function preamble
.globl	 sub
.type	 sub,@function
sub:
### FunctionDef reset bp
	pushq	 %rbp
	movq	 %rsp, %rbp
### FunctionDef get params
	pushq	 %rdi
	pushq	 %rsi
	pushq	 %rdx
### FunctionDef allocate space for lcls
	subq	 $40, %rsp
### FunctionDef save registers
	pushq	 %rbx
	pushq	 %r12
	pushq	 %r13
	pushq	 %r14
	pushq	 %r15
### FunctionDef Body, remember to clean stack
### Assignment eval expr
### Constant push const
	pushq	 $_label
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -40(%rbp)
### For eval initial
### Assignment eval expr
### Ident, pushing i to stack
	pushq	 -16(%rbp)
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -32(%rbp)
FOR_LOOP_0:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing k to stack
	pushq	 -32(%rbp)
### Ident, pushing j to stack
	pushq	 -24(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jg	END_FOR_0
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing r to stack
	pushq	 -40(%rbp)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing k to stack
	pushq	 -32(%rbp)
### FunctionCall pop args into param_registers, r to l
	popq	 %rsi
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 get_char_at
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -40(%rbp)
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing k to stack
	pushq	 -32(%rbp)
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
	movq	 %rax, -32(%rbp)
	jmp	 FOR_LOOP_0
END_FOR_0:
### Return, eval expressions
### Ident, pushing r to stack
	pushq	 -40(%rbp)
### Return restore registers
	movq	 -80(%rbp),%r15
	movq	 -72(%rbp),%r14
	movq	 -64(%rbp),%r13
	movq	 -56(%rbp),%r12
	movq	 -48(%rbp),%rbx
### Return, put top of stack in rax
	popq	 %rax
### Return restore rbp, return
	leave
	ret
### Function preamble
.globl	 invert
.type	 invert,@function
invert:
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
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $_label
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	movq	 $512, %rcx
	repe cmpsd
	pushq	 %rax
	je	IF_TRUE_0
	jmp	 IF_FALSE_0
IF_TRUE_0:
### Return, eval expressions
### Constant push const
	pushq	 $_label
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $1
### BinaryOp, eval lhs, then rhs
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 strlen
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### Constant push const
	pushq	 $1
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdx
	popq	 %rsi
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 sub
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rsi
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 get_char_at
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
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
	pushq	 $world_label
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### Ident, pushing s to stack
	pushq	 -8(%rbp)
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
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
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
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 invert
### FunctionCall restore caller save registers
### FunctionCall handle result
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
