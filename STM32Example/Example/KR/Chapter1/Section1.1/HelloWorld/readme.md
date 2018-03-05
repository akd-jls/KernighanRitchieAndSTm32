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

	This project demonstrates how to Get Started in C programming language is by coding a 'hello, world' program.

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

	Now, for some explanations about the program itself. A C program, whatever its size, consists
	of functions and variables. A function contains statements that specify the computing
	operations to be done, and variables store values used during the computation. C functions are
	like the subroutines and functions in Fortran or the procedures and functions of Pascal. Our
	example is a function named main. Normally you are at liberty to give functions whatever
	names you like, but ``main'' is special - your program begins executing at the beginning of
	main. This means that every program must have a main somewhere.
	
	main will usually call other functions to help perform its job, some that you wrote, and others
	from libraries that are provided for you. The first line of the program,
	
	#include <stdio.h>
	tells the compiler to include information about the standard input/output library; the line
	appears at the beginning of many C source files. The standard library is described in Chapter 7
	and Appendix B.
	
	One method of communicating data between functions is for the calling function to provide a
	list of values, called arguments, to the function it calls. The parentheses after the function name
	surround the argument list. In this example, main is defined to be a function that expects no
	arguments, which is indicated by the empty list ( ). 
	
	#include <stdio.h> 					include information about standard library
	main() 								define a function called main that received no argument values
	{ 									statements of main are enclosed in braces
		printf("hello, world\n"); 		main calls library function printf
										to print this sequence of characters
	} 									\n represents the newline character

	The statements of a function are enclosed in braces { }. The function main contains only one
	statement,
	
		printf("hello, world\n");
	
	A function is called by naming it, followed by a parenthesized list of arguments, so this calls
	the function printf with the argument "hello, world\n". printf is a library function that
	prints output, in this case the string of characters between the quotes.
	
	A sequence of characters in double quotes, like "hello, world\n", is called a character
	string or string constant. For the moment our only use of character strings will be as
	arguments for printf and other functions.
	
	The sequence \n in the string is C notation for the newline character, which when printed
	advances the output to the left margin on the next line. If you leave out the \n (a worthwhile
	experiment), you will find that there is no line advance after the output is printed. You must
	use \n to include a newline character in the printf argument; if you try something like
	printf("hello, world
	");

	the C compiler will produce an error message.
	
 */
