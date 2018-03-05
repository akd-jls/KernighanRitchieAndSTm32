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

	This project demonstrates the use of 'Variables and Arithmetic Expressions' in C programming language.
	It codes an example program that uses the formula oC=(5/9)(oF-32) to print the table of Fahrenheit
	temperatures and their centigrade or Celsius equivalents. It demonstrates the use of float data types
	and their implications.

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

	There are a couple of problems with the previous temperature conversion program. The simpler one is
	that the output isn't very pretty because the numbers are not right-justified. That's easy to fix; if
	we augment each %d in the printf statement with a width, the numbers printed will be rightjustified
	in their fields. For instance, we might say
	
		printf("%3d %6d\n", fahr, celsius);
	
	to print the first number of each line in a field three digits wide, and the second in a field six
	digits wide, like this:
	
		0 -17
	   20  -6
	   40   4
	   60  15
	   80  26
	  100  37
	  ...
	
	The more serious problem is that because we have used integer arithmetic, the Celsius
	temperatures are not very accurate; for instance, 0oF is actually about -17.8oC, not -17. To get
	more accurate answers, we should use floating-point arithmetic instead of integer. This
	requires some changes in the program. Here is the second version:
	
		refer to source code.

	This is much the same as before, except that fahr and celsius are declared to be float and
	the formula for conversion is written in a more natural way. We were unable to use 5/9 in the
	previous version because integer division would truncate it to zero. A decimal point in a
	constant indicates that it is floating point, however, so 5.0/9.0 is not truncated because it is
	the ratio of two floating-point values.
	
	If an arithmetic operator has integer operands, an integer operation is performed. If an
	arithmetic operator has one floating-point operand and one integer operand, however, the
	integer will be converted to floating point before the operation is done. If we had written
	(fahr-32), the 32 would be automatically converted to floating point. Nevertheless, writing
	floating-point constants with explicit decimal points even when they have integral values
	emphasizes their floating-point nature for human readers.
	
	The detailed rules for when integers are converted to floating point are in Chapter 2. For now,
	notice that the assignment
	
		fahr = lower;
	and the test
	
		while (fahr <= upper)
	
	also work in the natural way - the int is converted to float before the operation is done.
	
	The printf conversion specification %3.0f says that a floating-point number (here fahr) is to
	be printed at least three characters wide, with no decimal point and no fraction digits. %6.1f
	describes another number (celsius) that is to be printed at least six characters wide, with 1
	digit after the decimal point. The output looks like this:	
	
		0 -17.8
	   20  -6.7
	   40   4.4
	  ...

	Width and precision may be omitted from a specification: %6f says that the number is to be at
	least six characters wide; %.2f specifies two characters after the decimal point, but the width is
	not constrained; and %f merely says to print the number as floating point.
	
		%d 		:print as decimal integer
		%6d 	:print as decimal integer, at least 6 characters wide
		%f 		:print as floating point
		%6f 	:print as floating point, at least 6 characters wide
		%.2f 	:print as floating point, 2 characters after decimal point
		%6.2f 	:print as floating point, at least 6 wide and 2 after decimal point
	  
	Among others, printf also recognizes %o for octal, %x for hexadecimal, %c for character, %s
	for character string and %% for itself.  
 */
