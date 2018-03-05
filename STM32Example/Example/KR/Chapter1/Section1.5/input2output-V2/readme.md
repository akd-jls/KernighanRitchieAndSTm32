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

	This project demonstrates the use of Char Input/Output in programs.
	Given getchar and putchar, you can write a surprising amount of useful code without
	knowing anything more about input and output. The simplest example is a program that copies
	its input to its output one character at a time.

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

	The program for copying would be written more concisely by experienced C programmers. In
	C, any assignment, such as
	
		c = getchar();
	
	is an expression and has a value, which is the value of the left hand side after the assignment.
	This means that a assignment can appear as part of a larger expression. If the assignment of a
	character to c is put inside the test part of a while loop, the copy program can be written this
	way.

		refer to source code.
		
	The while gets a character, assigns it to c, and then tests whether the character was the endof-
	file signal. If it was not, the body of the while is executed, printing the character. The
	while then repeats. When the end of the input is finally reached, the while terminates and so
	does main.
	
	This version centralizes the input - there is now only one reference to getchar - and shrinks
	the program. The resulting program is more compact, and, once the idiom is mastered, easier
	to read. You'll see this style often. (It's possible to get carried away and create impenetrable
	code, however, a tendency that we will try to curb.)
	
	The parentheses around the assignment, within the condition are necessary. The precedence of
	!= is higher than that of =, which means that in the absence of parentheses the relational test !=
	would be done before the assignment =. So the statement
	
		c = getchar() != EOF
		is equivalent to
		c = (getchar() != EOF)

	This has the undesired effect of setting c to 0 or 1, depending on whether or not the call of
	getchar returned end of file. (More on this in Chapter 2.)
	

 */
