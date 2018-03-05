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

	This project demonstrates the use of 'Switch' in C programming language.
	The program here is to count the occurrences of each digit, white space, and all other characters.
	

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

	The switch statement is a multi-way decision that tests whether an expression matches one of
	a number of constant integer values, and branches accordingly.
	
		switch (expression) {
			case const-expr: statements
			case const-expr: statements
			default: statements
		}
	
	Each case is labeled by one or more integer-valued constants or constant expressions. If a case
	matches the expression value, execution starts at that case. All case expressions must be
	different. The case labeled default is executed if none of the other cases are satisfied. A
	default is optional; if it isn't there and if none of the cases match, no action at all takes place.
	
	Cases and the default clause can occur in any order.
	
	In Chapter 1 we wrote a program to count the occurrences of each digit, white space, and all
	other characters, using a sequence of if ... else if ... else. Here is the same program
	with a switch:

		refer to source code
		
	The break statement causes an immediate exit from the switch. Because cases serve just as
	labels, after the code for one case is done, execution falls through to the next unless you take
	explicit action to escape. break and return are the most common ways to leave a switch. A
	break statement can also be used to force an immediate exit from while, for, and do loops,
	as will be discussed later in this chapter.
	
	Falling through cases is a mixed blessing. On the positive side, it allows several cases to be
	attached to a single action, as with the digits in this example. But it also implies that normally
	each case must end with a break to prevent falling through to the next. Falling through from
	one case to another is not robust, being prone to disintegration when the program is modified.
	With the exception of multiple labels for a single computation, fall-throughs should be used
	sparingly, and commented.
	
	As a matter of good form, put a break after the last case (the default here) even though it's
	logically unnecessary. Some day when another case gets added at the end, this bit of defensive
	programming will save you.

	
 */
