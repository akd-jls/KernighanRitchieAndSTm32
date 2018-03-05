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

	This project demonstrates the use of 'Break and Continue' in C programming language.
	This program remove trailing blanks, tabs, newlines from the end of a string.
	

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

	It is sometimes convenient to be able to exit from a loop other than by testing at the top or
	bottom. The break statement provides an early exit from for, while, and do, just as from
	switch. 
	
	A break causes the innermost enclosing loop or switch to be exited immediately.
	
	The following function, trim, removes trailing blanks, tabs and newlines from the end of a
	string, using a break to exit from a loop when the rightmost non-blank, non-tab, non-newline
	is found.

		refer to source code.
	
	strlen returns the length of the string. The for loop starts at the end and scans backwards
	looking for the first character that is not a blank or tab or newline. The loop is broken when
	one is found, or when n becomes negative (that is, when the entire string has been scanned).
	You should verify that this is correct behavior even when the string is empty or contains only
	white space characters.
	
	The continue statement is related to break, but less often used; it causes the next iteration of
	the enclosing for, while, or do loop to begin. In the while and do, this means that the test
	part is executed immediately; in the for, control passes to the increment step. 
	
	The continue
	statement applies only to loops, not to switch. A continue inside a switch inside a loop
	causes the next loop iteration.
	
	As an example, this fragment processes only the non-negative elements in the array a; negative
	values are skipped.
	
		for (i = 0; i < n; i++)
			if (a[i] < 0) /* skip negative elements */
				continue;
			... /* do positive elements */
	
	The continue statement is often used when the part of the loop that follows is complicated, so
	that reversing a test and indenting another level would nest the program too deeply.
	
 */
