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

	This project demonstrates the use of 'Do-While' loop in C programming language.
	This program convert integer n to characters in s.
	

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

	As we discussed in Chapter 1, the while and for loops test the termination condition at the
	top. By contrast, the third loop in C, the do-while, tests at the bottom after making each pass
	through the loop body; the body is always executed at least once.
	The syntax of the do is

		do
			statement
		while (expression);
		
	The statement is executed, then expression is evaluated. If it is true, statement is evaluated
	again, and so on. When the expression becomes false, the loop terminates. 
	
	Experience shows that do-while is much less used than while and for. Nonetheless, from
	time to time it is valuable, as in the following function itoa, which converts a number to a
	character string (the inverse of atoi). The job is slightly more complicated than might be
	thought at first, because the easy methods of generating the digits generate them in the wrong
	order. We have chosen to generate the string backwards, then reverse it.
	
		refer to source code.

	The do-while is necessary, or at least convenient, since at least one character must be
	installed in the array s, even if n is zero. We also used braces around the single statement that
	makes up the body of the do-while, even though they are unnecessary, so the hasty reader
	will not mistake the while part for the beginning of a while loop.

 */
