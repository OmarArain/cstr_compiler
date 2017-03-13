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
### Assignment eval expr
### Constant push const
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### Assignment eval expr
### Constant push const
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
### Assignment eval expr
### Constant push const
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	je	IF_TRUE_0
	jmp	 IF_FALSE_0
IF_TRUE_0:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_0:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Constant push const
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	je	IF_TRUE_1
	jmp	 IF_FALSE_1
IF_TRUE_1:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_1:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	je	IF_TRUE_2
	jmp	 IF_FALSE_2
IF_TRUE_2:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_2:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### Ident, pushing u to stack
	pushq	 -8(%rbp)
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
	je	IF_TRUE_3
	jmp	 IF_FALSE_3
IF_TRUE_3:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_3:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing u to stack
	pushq	 -8(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing u to stack
	pushq	 -8(%rbp)
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
	je	IF_TRUE_4
	jmp	 IF_FALSE_4
IF_TRUE_4:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_4:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	jne	IF_TRUE_5
	jmp	 IF_FALSE_5
IF_TRUE_5:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_5:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Constant push const
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	jne	IF_TRUE_6
	jmp	 IF_FALSE_6
IF_TRUE_6:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_6:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	cmpq	 %rcx, %rax
	pushq	 %rax
	jne	IF_TRUE_7
	jmp	 IF_FALSE_7
IF_TRUE_7:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_7:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### Constant push const
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### Ident, pushing u to stack
	pushq	 -8(%rbp)
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
	jne	IF_TRUE_8
	jmp	 IF_FALSE_8
IF_TRUE_8:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_8:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### If eval conditions
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing u to stack
	pushq	 -8(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing s to stack
	pushq	 -8(%rbp)
### Ident, pushing t to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Ident, pushing u to stack
	pushq	 -8(%rbp)
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
	jne	IF_TRUE_9
	jmp	 IF_FALSE_9
IF_TRUE_9:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $1
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	call	 printd
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_9:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $0
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
