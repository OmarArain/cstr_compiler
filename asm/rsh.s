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
	pushq	 $45000
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
### Assignment eval expr
### Constant push const
	pushq	 $3
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $45000
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $3
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $45000
### Constant push const
	pushq	 $3
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Constant push const
	pushq	 $0
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
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $0
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
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $0
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Constant push const
	pushq	 $0
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
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $0
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	addq	 %rcx, %rax
	pushq	 %rax
### Constant push const
	pushq	 $3
### BinaryOp, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
### perform op, push to stack
	sarq	 %cl, %rax
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
### BinaryOp, eval lhs, then rhs
### Constant push const
	pushq	 $45000
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Constant push const
	pushq	 $0
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
	sarq	 %cl, %rax
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
