/**
  @page Description of the example
  
  @verbatim
  ******************************************************************************
  * @file    readme.txt 
  * @author  AKD
  * @brief   Description of the example.
  ******************************************************************************
  *
  *
  *
  ******************************************************************************
  @endverbatim

@par Example Description

	This project demonstrates the use of 'Type Conversions' in C programming language.
	This program convert character to lower case; ASCII only.
	

@par Hardware and Software environment  

  - This example runs on STM32F401xEx devices.
    
  - This example has been tested with STMicroelectronics STM32F4xx-Nucleo RevB 
    boards and can be easily tailored to any other supported device 
    and development board.

@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example

@par Description from “The C Programming Language” 

	Another example of char to int conversion is the function lower, which maps a single
	character to lower case for the ASCII character set. If the character is not an upper case letter,
	lower returns it unchanged.
	
		refer to source code.

	This works for ASCII because corresponding upper case and lower case letters are a fixed
	distance apart as numeric values and each alphabet is contiguous -- there is nothing but letters
	between A and Z. This latter observation is not true of the EBCDIC character set, however, so
	this code would convert more than just letters in EBCDIC.
	
	The standard header <ctype.h>, described in Appendix B, defines a family of functions that
	provide tests and conversions that are independent of character set. For example, the function
	tolower is a portable replacement for the function lower shown above. Similarly, the test
	
		c >= '0' && c <= '9'
	
	can be replaced by
	
		isdigit(c)
	
	There is one subtle point about the conversion of characters to integers. The language does not
	specify whether variables of type char are signed or unsigned quantities. When a char is
	converted to an int, can it ever produce a negative integer? The answer varies from machine
	to machine, reflecting differences in architecture. On some machines a char whose leftmost bit
	is 1 will be converted to a negative integer (``sign extension''). On others, a char is promoted
	to an int by adding zeros at the left end, and thus is always positive.

	The definition of C guarantees that any character in the machine's standard printing character
	set will never be negative, so these characters will always be positive quantities in expressions.
	But arbitrary bit patterns stored in character variables may appear to be negative on some
	machines, yet positive on others. For portability, specify signed or unsigned if non-character
	data is to be stored in char variables.
	
	Relational expressions like i > j and logical expressions connected by && and || are defined
	to have value 1 if true, and 0 if false. Thus the assignment
	
		d = c >= '0' && c <= '9'
	
	sets d to 1 if c is a digit, and 0 if not. However, functions like isdigit may return any nonzero
	value for true. In the test part of if, while, for, etc., ``true'' just means ``non-zero'', so
	this makes no difference.
	
@note: 	In the test part of if, while, for, etc., ``true'' just means ``non-zero'', so
	this makes no difference
	
	Implicit arithmetic conversions work much as expected. In general, if an operator like + or *
	that takes two operands (a binary operator) has operands of different types, the ``lower'' type is
	promoted to the ``higher'' type before the operation proceeds. The result is of the integer type.
	
	Section 6 of Appendix A states the conversion rules precisely. If there are no unsigned
	operands, however, the following informal set of rules will suffice:
	
	· If either operand is long double, convert the other to long double.
	· Otherwise, if either operand is double, convert the other to double.
	· Otherwise, if either operand is float, convert the other to float.
	· Otherwise, convert char and short to int.
	· Then, if either operand is long, convert the other to long.
	
	Notice that floats in an expression are not automatically converted to double; this is a
	change from the original definition. In general, mathematical functions like those in <math.h>
	will use double precision. The main reason for using float is to save storage in large arrays,
	or, less often, to save time on machines where double-precision arithmetic is particularly
	expensive.
	
	Conversion rules are more complicated when unsigned operands are involved. The problem is
	that comparisons between signed and unsigned values are machine-dependent, because they
	depend on the sizes of the various integer types. For example, suppose that int is 16 bits and
	long is 32 bits. Then -1L < 1U, because 1U, which is an unsigned int, is promoted to a
	signed long. But -1L > 1UL because -1L is promoted to unsigned long and thus appears
	to be a large positive number.

@note: Conversion rules are more complicated when unsigned operands are involved.	
	
	Conversions take place across assignments; the value of the right side is converted to the type
	of the left, which is the type of the result.
	
	A character is converted to an integer, either by sign extension or not, as described above.
	Longer integers are converted to shorter ones or to chars by dropping the excess high-order
	bits. Thus in
	
		int i;
		char c;
		i = c;
		c = i;
	
	the value of c is unchanged. This is true whether or not sign extension is involved. Reversing
	the order of assignments might lose information, however.
	
	If x is float and i is int, then x = i and i = x both cause conversions; float to int causes
	truncation of any fractional part. When a double is converted to float, whether the value is
	rounded or truncated is implementation dependent.
	
	Since an argument of a function call is an expression, type conversion also takes place when
	arguments are passed to functions. In the absence of a function prototype, char and short
	become int, and float becomes double. This is why we have declared function arguments to
	be int and double even when the function is called with char and float.
	
	Finally, explicit type conversions can be forced (``coerced'') in any expression, with a unary
	operator called a cast. In the construction
	
		(type name) expression
	
	the expression is converted to the named type by the conversion rules above. The precise
	meaning of a cast is as if the expression were assigned to a variable of the specified type, which
	is then used in place of the whole construction. For example, the library routine sqrt expects a
	double argument, and will produce nonsense if inadvertently handled something else. (sqrt is
	declared in <math.h>.) So if n is an integer, we can use

		sqrt((double) n)
		
	to convert the value of n to double before passing it to sqrt. Note that the cast produces the
	value of n in the proper type; n itself is not altered. The cast operator has the same high
	precedence as other unary operators, as summarized in the table at the end of this chapter.
	
	If arguments are declared by a function prototype, as the normally should be, the declaration
	causes automatic coercion of any arguments when the function is called. Thus, given a function
	prototype for sqrt:
	
		double sqrt(double)
	the call
		root2 = sqrt(2)
	coerces the integer 2 into the double value 2.0 without any need for a cast.
	
	The standard library includes a portable implementation of a pseudo-random number generator
	and a function for initializing the seed; the former illustrates a cast:
	
		unsigned long int next = 1;
		/* rand: return pseudo-random integer on 0..32767 */
		int rand(void)
		{
		next = next * 1103515245 + 12345;
		return (unsigned int)(next/65536) % 32768;
		}
		/* srand: set seed for rand() */
		void srand(unsigned int seed)
		{
		next = seed;
		}
	
 */
