### Program preamble
.file	 "program.c"
.text
.data

L0_label:
	 .string	 "0"
	 .zero	 512
L1_label:
	 .string	 "1"
	 .zero	 512
L_label:
	 .string	 " "
	 .zero	 512
Ln_label:
	 .string	 "\n"
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
	pushq	 $L0_label
### Assignment global
	popq	 %rax
	movq	 $global_1, %rcx
	movq	 %rax, (%rcx)
### For eval initial
### Assignment eval expr
### Constant push const
	pushq	 $1
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
FOR_LOOP_0:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $100
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jge	END_FOR_0
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing global tab to stack
	pushq	 $global_1
### Constant push const
	pushq	 $L1_label
### perform op, push to stack
### copy ### BinaryOp string, push rhs, lhs into reg
	popq	 %rsi
	popq	 %rdi
	xorq	 %rax, %rax
	call	 strcat
	pushq	 %rax
### Assignment global
	popq	 %rax
	movq	 $global_1, %rcx
	movq	 %rax, (%rcx)
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
### For eval initial
### Assignment eval expr
### Constant push const
	pushq	 $2
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
FOR_LOOP_1:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $10
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jge	END_FOR_1
### For eval initial
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
FOR_LOOP_2:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Constant push const
	pushq	 $100
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jge	END_FOR_2
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing global tab to stack
	pushq	 $global_1
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Constant push const
	pushq	 $L0_label
### FunctionCall pop args into param_registers, r to l
	popq	 %rdx
	popq	 %rsi
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 put_char_at
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
### Assignment eval expr
### BinaryOp, eval lhs, then rhs
### Ident, pushing j to stack
	pushq	 -16(%rbp)
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	addq	 %rcx, %rax
	pushq	 %rax
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -16(%rbp)
	jmp	 FOR_LOOP_2
END_FOR_2:
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
	jmp	 FOR_LOOP_1
END_FOR_1:
### For eval initial
### Assignment eval expr
### Constant push const
	pushq	 $0
### Assignment mov from stack to reg, assign to var
	popq	 %rax
	movq	 %rax, -8(%rbp)
FOR_LOOP_3:
### For eval conditions
### BinaryOp, eval lhs, then rhs
### Ident, pushing i to stack
	pushq	 -8(%rbp)
### Constant push const
	pushq	 $100
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	jge	END_FOR_3
### If eval conditions
### BinaryOp, eval lhs, then rhs
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Ident, pushing global tab to stack
	pushq	 $global_1
### Ident, pushing i to stack
	pushq	 -8(%rbp)
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
### Constant push const
	pushq	 $L1_label
### perform op, push to stack
### BinaryOp int, push rhs, lhs into reg
	popq	 %rcx
	popq	 %rax
	cmpq	 %rcx, %rax
	pushq	 %rax
	je	IF_TRUE_0
	jmp	 IF_FALSE_0
IF_TRUE_0:
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
	pushq	 $L_label
### FunctionCall pop args into param_registers, r to l
	popq	 %rdi
### FunctionCall save caller save registers
### FunctionCall call function
	xorq	 %rax, %rax
	call	 printf
### FunctionCall restore caller save registers
### FunctionCall handle result
	pushq	 %rax
IF_FALSE_0:
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
	jmp	 FOR_LOOP_3
END_FOR_3:
### FunctionCall preamble
### FunctionCall evaluate args left to right, push onto stack
### Constant push const
	pushq	 $Ln_label
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
