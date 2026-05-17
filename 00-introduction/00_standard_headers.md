# 34 standard headers

# Tire 1: The "Must-Haves" (Used daily)

	stdio.h		// Standard input/output (printf, scanf)
	stdlib.h	// General Utilities (memory allocation, exit, random numbers)
	string.h	// String manipulation (strcpy, strlen)
	stdbool.h	// Adds true and false
	stdint.h	// Fixed-width integers (like int32_t)

# Tire 2: Common utilities

	math.h		// Common mathmatical functions (sin, sqrt, pow)
	time.h		// Handling date and time
	ctype.h		// Testing/converting characters (is it a letter? make it uppercase)
	stddef.h	// Define usefull types like size_t and NULL
	limits.h	// List the size limits of specific system's data tpes

# Tire 3: Specialized Data & Logic

	assert.h	// Used for debugging (verifies if a conditon is true)
	errno.h		// Reporting error codes
	float.h		// limits and properties of floating-points numbers
	stdarg.h	// Allows functions to take a variable number of arguments (like printf) 
	stdbit.h	// (New in C23) Built-in tools for manipulating bits (binary)

# Tire 4: Advanced Programming (Concurrency & Signals)

	threads.h	// Running multiple tasks at the same time
	stdatomic.h	// Atomic operations (preventing data corruption in threads)
	signal.h	// Handling "signals" (like telling a programto stop when press ctrl+C)
	setjmp.h	// Complex "jumps" from one part of a program to another

# Tire 5: Internationalization & Math Specialists

	complex.h	// Support for complex/imagiary numbers
	tgmath.h	// Type-generic math (automatically picks float vs double)
	locale.h	// Handling different languages, currencies, and date formats
	uchar.h		// Support for Unicode characters (UTF-16/32)
	wchar.h		// Support for "wide" characters (non-English alphabets)
	wctype.h	// Character testing for wide characters

# Tire 6: The Obscure (Advanced)

	fenv.h		// Controlling the floating-point environment (rounding, etc)
	inttypes.h	// Advanced formatting for the integers in stdint.h
	iso646.h	// Allows typing words like and instead of && (for old keyboards)
	stdnoreturn.h	// Tells the compiler a function will never return
	stdckdint.h	// (New in C23) Checked integer arithmetic (prevents math errors)
	stdfix.h	// (Proposed/Optional) Support for fixed-point math
	stdalign.h	// Controlling how data is aligned in memory
	uchar.h		// Specialized Unicode utilities
	stdckdint.h	// Safety checks for math operations
