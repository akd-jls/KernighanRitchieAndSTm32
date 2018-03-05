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

	This project shows sizes of different C data types. Data type sizes are Machine and Compiler dependent.
	Remeber that STm32 is a 32 bit ARM Cortex M Device.

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

	There are only a few basic data types in C:
	
		char a single byte, capable of holding one character in the local character set
		int an integer, typically reflecting the natural size of integers on the host machine
		float single-precision floating point
		double double-precision floating point
	
	In addition, there are a number of qualifiers that can be applied to these basic types. short and
	long apply to integers:
	
		short int sh;
		long int counter;
	
	The word int can be omitted in such declarations, and typically it is.

	The intent is that short and long should provide different lengths of integers where practical;
	int will normally be the natural size for a particular machine. short is often 16 bits long, and
	int either 16 or 32 bits. Each compiler is free to choose appropriate sizes for its own
	hardware, subject only to the the restriction that shorts and ints are at least 16 bits, longs are
	at least 32 bits, and short is no longer than int, which is no longer than long.
	
	The qualifier signed or unsigned may be applied to char or any integer. unsigned numbers
	are always positive or zero, and obey the laws of arithmetic modulo 2n, where n is the number
	of bits in the type. So, for instance, if chars are 8 bits, unsigned char variables have values
	between 0 and 255, while signed chars have values between -128 and 127 (in a two's
	complement machine.) Whether plain chars are signed or unsigned is machine-dependent, but
	printable characters are always positive.
	
	The type long double specifies extended-precision floating point. As with integers, the sizes
	of floating-point objects are implementation-defined; float, double and long double could
	represent one, two or three distinct sizes.
	
	The standard headers <limits.h> and <float.h> contain symbolic constants for all of these
	sizes, along with other properties of the machine and compiler. These are discussed in
	Appendix B.

 */
