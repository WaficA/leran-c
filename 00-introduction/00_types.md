# The Basic Types
	int:
// avoid in kernel - size is arch-dependant
- For whole numbers(integers), ex. 5, -10 or 100.

	char:
- For single characters like 'a', 'b', or '$'. (behind the scenec C treats as small numbers)

	float:
- For numbers with decimals (single precision) like 3.14

	double:
- Like float, but with double the precision. Used for more accurate decimal math

# Modified Types (Adjusting Size/Sign)
// use "modifiers" in front of basic types to change their ranges.

	unsigned:
- Removes negative numbers so you can store larger positive ones (eg. unsigned int)

	long:
- Increasethe storage size for very large numbers (eg., long long int)

	short:
- Decreases the storage size to save memory

# Derived Types (Grouping data)
	array:
- A list of items of the same type (eg., a list of 10 integers)

	struct:
- A custom container that holds different types (eg., a "User" struct holding an int for
 ID and a char array for a name)

	pointer:
- A variale that stores the memory address of another variable

# Then "Nothing" type
	void:
- Represents the absence of type. Usually used for functions that dont return any value

# Modern Standard Types (From stdnt.h)
	int32_t:
- Guaranteed to be exactly 32 bits

	uint64_t:
- Garatnteed to be exactly 64 bits and unsigned (Positive Only)

---

# The logical Type
	_Bool: 
- The built-in type for true/false.(When stdbool.h is used, it lets you type bool instead)

# Complex Numbers (From complex.h)
	float _Complex, double _Complex, and long double _Complex: 
- Used for advanced math involing imaginary numbers (like 3 + 4i)

# Emurations
	enum: 
- used to create a set of named constants. ex. type called color with value RED.

# Specialized Cotainers
	union: 
- Similar to struct, but it save different types in the same memory location.
  Only one can be used at a time.
  Its a way to save memory when a variable could be an int OR a float, but not both same time 

# Type Aliases
	typedef: 
- This isn't technically a new type, but it allows create of nicknames for existing types.
EX. can make unsigned long just called BigNum
