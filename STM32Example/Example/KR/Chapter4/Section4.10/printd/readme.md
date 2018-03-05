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

	This project demonstrates the use of 'Recursion' in C programming language.
	This program prints a number as a character string.
	

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

	C functions may be used recursively; that is, a function may call itself either directly or
	indirectly. Consider printing a number as a character string. As we mentioned before, the digits
	are generated in the wrong order: low-order digits are available before high-order digits, but
	they have to be printed the other way around.

	There are two solutions to this problem. On is to store the digits in an array as they are
	generated, then print them in the reverse order, as we did with itoa in section 3.6. The
	alternative is a recursive solution, in which printd first calls itself to cope with any leading
	digits, then prints the trailing digit. Again, this version can fail on the largest negative number.
	
		refer to source code
	
	When a function calls itself recursively, each invocation gets a fresh set of all the automatic
	variables, independent of the previous set. This in printd(123) the first printd receives the
	argument n = 123. It passes 12 to a second printd, which in turn passes 1 to a third. The
	third-level printd prints 1, then returns to the second level. That printd prints 2, then returns
	to the first level. That one prints 3 and terminates.	

 */
