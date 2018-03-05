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

	This project demonstrates the use of 'Bit-fields' in C programming language.
	

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

	When storage space is at a premium, it may be necessary to pack several objects into a single
	machine word; one common use is a set of single-bit flags in applications like compiler symbol
	tables. Externally-imposed data formats, such as interfaces to hardware devices, also often
	require the ability to get at pieces of a word.

	Imagine a fragment of a compiler that manipulates a symbol table. Each identifier in a program
	has certain information associated with it, for example, whether or not it is a keyword, whether
	or not it is external and/or static, and so on. The most compact way to encode such
	information is a set of one-bit flags in a single char or int.
	The usual way this is done is to define a set of ``masks'' corresponding to the relevant bit
	positions, as in

		#define KEYWORD 01
		#define EXTRENAL 02
		#define STATIC 04

	or

		enum { KEYWORD = 01, EXTERNAL = 02, STATIC = 04 };
		
	The numbers must be powers of two. Then accessing the bits becomes a matter of ``bitfiddling''
	with the shifting, masking, and complementing operators that were described in Chapter 2.
	
	Certain idioms appear frequently:
	
		flags |= EXTERNAL | STATIC;
	
	turns on the EXTERNAL and STATIC bits in flags, while
	
		flags &= ~(EXTERNAL | STATIC);
	
	turns them off, and
	
		if ((flags & (EXTERNAL | STATIC)) == 0) ...
	
	is true if both bits are off.
	
	Although these idioms are readily mastered, as an alternative C offers the capability of defining
	and accessing fields within a word directly rather than by bitwise logical operators. A bit-field,
	or field for short, is a set of adjacent bits within a single implementation-defined storage unit
	that we will call a ``word.'' For example, the symbol table #defines above could be replaced
	by the definition of three fields:
	
		struct {
			unsigned int is_keyword : 1;
			unsigned int is_extern : 1;
			unsigned int is_static : 1;
		} flags;
	
	This defines a variable table called flags that contains three 1-bit fields. The number following
	the colon represents the field width in bits. The fields are declared unsigned int to ensure
	that they are unsigned quantities.
	
	Individual fields are referenced in the same way as other structure members:
	flags.is_keyword, flags.is_extern, etc. Fields behave like small integers, and may
	participate in arithmetic expressions just like other integers. Thus the previous examples may
	be written more naturally as
	
		flags.is_extern = flags.is_static = 1;
	
	to turn the bits on;
	
		flags.is_extern = flags.is_static = 0;
	
	to turn them off; and
	
		if (flags.is_extern == 0 && flags.is_static == 0)
			...
	
	to test them.
	
	Almost everything about fields is implementation-dependent. Whether a field may overlap a
	word boundary is implementation-defined. Fields need not be names; unnamed fields (a colon
	and width only) are used for padding. The special width 0 may be used to force alignment at
	the next word boundary.
	
	Fields are assigned left to right on some machines and right to left on others. This means that
	although fields are useful for maintaining internally-defined data structures, the question of
	which end comes first has to be carefully considered when picking apart externally-defined
	data; programs that depend on such things are not portable. Fields may be declared only as
	ints; for portability, specify signed or unsigned explicitly. They are not arrays and they do
	not have addresses, so the & operator cannot be applied on them.
*/
