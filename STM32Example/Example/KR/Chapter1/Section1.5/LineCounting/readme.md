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

	This project demonstrates the use of Char Input in programs.
	This program counts input lines.

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

	the standard library ensures that
	an input text stream appears as a sequence of lines, each terminated by a newline. Hence,
	counting lines is just counting newlines.

		refer to source code
	
	The body of the while now consists of an if, which in turn controls the increment ++nl. The
	if statement tests the parenthesized condition, and if the condition is true, executes the
	statement (or group of statements in braces) that follows. We have again indented to show
	what is controlled by what.
	
	The double equals sign == is the C notation for ``is equal to'' (like Pascal's single = or Fortran's
	.EQ.). This symbol is used to distinguish the equality test from the single = that C uses for
	assignment. A word of caution: newcomers to C occasionally write = when they mean ==. As
	we will see in Chapter 2, the result is usually a legal expression, so you will get no warning.
	
	A character written between single quotes represents an integer value equal to the numerical
	value of the character in the machine's character set. This is called a character constant,
	although it is just another way to write a small integer. So, for example, 'A' is a character
	constant; in the ASCII character set its value is 65, the internal representation of the character
	A. Of course, 'A' is to be preferred over 65: its meaning is obvious, and it is independent of a
	particular character set.
	
	The escape sequences used in string constants are also legal in character constants, so '\n'
	stands for the value of the newline character, which is 10 in ASCII. You should note carefully
	that '\n' is a single character, and in expressions is just an integer; on the other hand, '\n' is
	a string constant that happens to contain only one character. The topic of strings versus
	characters is discussed further in Chapter 2.

 */
