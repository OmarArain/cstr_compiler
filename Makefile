TESTS = "add.s"
TESTDIR = test
SRCDIR = CSTR_Compiler
PYTHON = python3
ASMDIR = asm
BINDIR = bin

all:
	echo specify target
asm_test: test/add.c
	gcc -fno-asynchronous-unwind-tables -O0 -S test/add.c -o asm/add.s

test: $(patsubst %.c,%,$(TESTS))
	for t in $^; do ./$$t ; done
add.s:
	$(PYTHON) $(SRCDIR)/cstr_parser.py $(TESTDIR)/add.c
add: add.s
	gcc $(ASMDIR)/add.s -o lib/lib.c -o $(BINDIR)/add

.PHONY: clean
clean:
	-rm test.s
	-rm parser.c lexer.c
	-rm parser

