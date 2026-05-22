# The Compilation pipeline - running gcc:
source.c -> preprocessor -> source.i -> 
compiler -> source.s -> assembler -> 
source.o -> linker ->
binary

# $gcc -E source.c -o source.i # preprocessor output

human-readable C-like text.
Used for:
- debugging macros
- understanding preprocessing
- compiler debugging

# $gcc -S source.c -o source.s # assembly output

Human-readable assembly language.
Very low-level CPU instructions.
Used for:
- optimization analysis
- compiler study
- performance tuning
- reverse engineering

Most developers rarely inspect it.
Systems/performance engineers do more often.

# $gcc -c source.c -o source.o # object file

Object file.
Binary machine code but NOT executable yet.

Contains:
- compiled functions
- symbols
- unresolved references

Used by linker later.
- Very common in real projects.
- Large projects compile MANY .o files separately.

# $gcc    source.c -o source   # full binary

Final executable binary.

# gcc falgs
- -Wall			//enable all common warnings
- -Wextra		//enable extra warnings on top of Wall
- Wconversion		//catches implicit type conversions (eg. demoting that looses data)
- Wshadow		//warns if a value shadows another in outer scope
- Wstrict-prototypes	//enforces proper function declaration
- pedantic		//strict C standard compliance
- -fsanitize=address	//detect memory errors (eg. out-of-bound, use-after-free)
- -g			//embed debug info so gbd can read it

gcc -Wall -Wextra -g -o source source.c

# valgrind
- --leak-check=full		//detailed report on every leak
- --track-origins=yes		//tells exactly where uninitialized memory came from
- --error-exitcode=1		//return a non-zero exit code if error found (usefull for scripting)

# Makefile
// nano Makefile

CC = gcc
CFLAGS = -Wall -Wextra -Wconversion -Wshadow -Wstrict-prototypes -pedantic -g

source: source.c
$(CC) $(CFLAGS) -o source source.c

clean:
rm -f source

# run make && valgrind command
// make clean
// make 
// ./source
// valgrind --leak-check=full --track-origins=yes --error-exitcode=1 ./source
