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

	This project demonstrates the use of 'Else-If' in C programming language.
	This program illustrate a binary search function.
	

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

	The sequence of if statements is
	the most general way of writing a multi-way decision. The expressions are evaluated in order;
	if an expression is true, the statement associated with it is executed, and this terminates the
	whole chain. As always, the code for each statement is either a single statement, or a group of
	them in braces.
	
	The last else part handles the ``none of the above'' or default case where none of the other
	conditions is satisfied. Sometimes there is no explicit action for the default; in that case the
	trailing
	
		else
			statement
	
	can be omitted, or it may be used for error checking to catch an ``impossible'' condition.


	To illustrate a three-way decision, here is a binary search function that decides if a particular
	value x occurs in the sorted array v. The elements of v must be in increasing order. The
	function returns the position (a number between 0 and n-1) if x occurs in v, and -1 if not.

	Binary search first compares the input value x to the middle element of the array v. If x is less
	than the middle value, searching focuses on the lower half of the table, otherwise on the upper
	half. In either case, the next step is to compare x to the middle element of the selected half.
	This process of dividing the range in two continues until the value is found or the range is
	empty.

		refer to source code.

	The fundamental decision is whether x is less than, greater than, or equal to the middle element
	v[mid] at each step; this is a natural for else-if.
	
 */
