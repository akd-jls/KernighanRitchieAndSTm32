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

	This project demonstrates the use of the comma ',' operator in C programming language.
	This program illustrates reverse string s in place.
	

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

	One final C operator is the comma ``,'', which most often finds use in the for statement. 

	A pair of expressions separated by a comma is evaluated left to right, and the type and value of
	the result are the type and value of the right operand. 
	
	Thus in a for statement, it is possible to
	place multiple expressions in the various parts, for example to process two indices in parallel.
	This is illustrated in the function reverse(s), which reverses the string s in place.
	
		refer to source code.

@note: The commas that separate function arguments, variables in declarations, etc., are not comma
	operators, and do not guarantee left to right evaluation.

	Comma operators should be used sparingly. The most suitable uses are for constructs strongly
	related to each other, as in the for loop in reverse, and in macros where a multistep
	computation has to be a single expression. A comma expression might also be appropriate for
	the exchange of elements in reverse, where the exchange can be thought of a single
	operation:

		for (i = 0, j = strlen(s)-1; i < j; i++, j--)
			c = s[i], s[i] = s[j], s[j] = c;
	
 */
