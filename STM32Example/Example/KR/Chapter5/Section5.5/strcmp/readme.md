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

	This project demonstrates the use of 'Character Pointers and Functions' in C programming language.
	This program demonstrates Character Pointers.
	

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

	The second routine that we will examine is strcmp(s,t), which compares the character
	strings s and t, and returns negative, zero or positive if s is lexicographically less than, equal
	to, or greater than t. The value is obtained by subtracting the characters at the first position
	where s and t disagree.
	
		refer to source code
	
	Since ++ and -- are either prefix or postfix operators, other combinations of * and ++ and --
	occur, although less frequently. For example,

		*--p
	
	decrements p before fetching the character that p points to. In fact, the pair of expressions
	
		*p++ = val; /* push val onto stack */
		val = *--p; /* pop top of stack into val */
	
	are the standard idiom for pushing and popping a stack.
*/
