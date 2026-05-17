# Learning C

Hands-on C programming exercises, experiments, and notes created while learning C programming on Linux.

This repository focuses on practical learning through:
- GCC compilation
- Linux development workflow
- Problem solving
- Memory management
- Debugging
- Makefiles
- Terminal-based development


---

## Topics Covered

- Variables and data types
- Input and output
- Operators
- Type conversion
- Conditional statements
- Loops
- Functions
- Variable scope
- Arrays
- Strings
- Pointers
- Structures
- Dynamic memory allocation
- File handling
- Preprocessor macros
- Standard library functions

---

## Environment

- Ubuntu Linux
- GCC
- Make
- Valgrind
- Terminal workflow

---

## Compilation Example

Compile a file manually:

```bash
gcc -Wall -Wextra -Wconversion -Wshadow -Wstrict-prototypes -pedantic -g file.c -o program -lm
```

Run the program:

```bash
./program
```

---

## Repository Structure

```text
00-introduction/
01-basics/
02-conditions/
03-loops/
04-functions/
05-arrays-and-strings/
06-pointers/
07-structures-and-enums/
08-memory-management/
09-file-handling/
10-preprocessor-and-macros/
```

Each folder contains focused examples and exercises related to the topic.

---

## Build System

A general Makefile scaffold is included for experimenting with:
- compilation
- compiler flags
- multi-file builds
- automation

---

## Goal

The goal of this repository is not only learning C syntax, but understanding:
- how programs are built
- how compilation works
- how debugging works
- how memory behaves
- how Linux-based development workflows operate

---

## Notes

This repository contains:
- learning exercises
- practice tasks
- small experiments
- incremental improvements
- debugging attempts
Some code intentionally remains simple or experimental as part of the learning process.

---

## Mekefile

A general Makefile scaffold is included for experimenting with
compilation, compiler flags, and basic build automation.

---

## Philosophy

Practical programming, Linux, and systems.

Less theory. More building.
