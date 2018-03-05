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

	Given getchar and putchar, you can write a surprising amount of useful code without
	knowing anything more about input and output. The simplest example is a program that copies
	its input to its output one character at a time:

		refer to source code.
		
	The relational operator != means ``not equal to''.
	What appears to be a character on the keyboard or screen is of course, like everything else,
	stored internally just as a bit pattern. The type char is specifically meant for storing such
	character data, but any integer type can be used. We used int for a subtle but important
	reason.

	The problem is distinguishing the end of input from valid data. The solution is that getchar
	returns a distinctive value when there is no more input, a value that cannot be confused with
	any real character. This value is called EOF, for ``end of file''. We must declare c to be a type
	big enough to hold any value that getchar returns. We can't use char since c must be big
	enough to hold EOF in addition to any possible char. Therefore we use int.
		
	EOF is an integer defined in <stdio.h>, but the specific numeric value doesn't matter as long as
	it is not the same as any char value. By using the symbolic constant, we are assured that
	nothing in the program depends on the specific numeric value.

 */
