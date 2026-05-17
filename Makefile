# General-purpose Makefile scaffold for compiling C programs
# using GCC with strict warning and debugging flags.

CC = gcc
CFLAGS = -Wall -Wextra -Wconversion -Wshadow -Wstrict-prototypes -pedantic -g

switch_task: SOURCE.c
	$(CC) $(CFLAGS) -o SOURCE_BINARY SOURCE.c -lm

clean:
	rm -f switch_task
