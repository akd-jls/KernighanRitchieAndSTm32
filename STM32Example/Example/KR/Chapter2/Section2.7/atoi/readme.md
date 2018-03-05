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
	This program convert string to integer.

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

	When an operator has operands of different types, they are converted to a common type
	according to a small number of rules. In general, the only automatic conversions are those that
	convert a ``narrower'' operand into a ``wider'' one without losing information, such as
	converting an integer into floating point in an expression like f + i. Expressions that don't
	make sense, like using a float as a subscript, are disallowed. Expressions that might lose
	information, like assigning a longer integer type to a shorter, or a floating-point type to an
	integer, may draw a warning, but they are not illegal.
	
	A char is just a small integer, so chars may be freely used in arithmetic expressions. This
	permits considerable flexibility in certain kinds of character transformations. One is exemplified
	by this naive implementation of the function atoi, which converts a string of digits into its
	numeric equivalent.

		refer to source code.

	As we discussed in Chapter 1, the expression
	
		s[i] - '0'
	
	gives the numeric value of the character stored in s[i], because the values of '0', '1', etc.,
	form a contiguous increasing sequence.
	
 */
