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
	This program counts counts lines, words, and characters, with the loose
	definition that a word is any sequence of characters that does not contain a blank, tab or
	newline..

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

	Every time the program encounters the first character of a word, it counts one more word. The
	variable state records whether the program is currently in a word or not; initially it is ``not in
	a word'', which is assigned the value OUT. We prefer the symbolic constants IN and OUT to the
	literal values 1 and 0 because they make the program more readable. In a program as tiny as
	this, it makes little difference, but in larger programs, the increase in clarity is well worth the
	modest extra effort to write it this way from the beginning. You'll also find that it's easier to
	make extensive changes in programs where magic numbers appear only as symbolic constants.

	The line
	nl = nw = nc = 0;
	sets all three variables to zero. This is not a special case, but a consequence of the fact that an
	assignment is an expression with the value and assignments associated from right to left. It's as
	if we had written
	
		nl = (nw = (nc = 0));
	The operator || means OR, so the line
	
		if (c == ' ' || c == '\n' || c = '\t')
	says ``if c is a blank or c is a newline or c is a tab''. (Recall that the escape sequence \t is a
	visible representation of the tab character.) There is a corresponding operator && for AND; its
	precedence is just higher than ||. Expressions connected by && or || are evaluated left to
	right, and it is guaranteed that evaluation will stop as soon as the truth or falsehood is known.
	If c is a blank, there is no need to test whether it is a newline or tab, so these tests are not
	made. This isn't particularly important here, but is significant in more complicated situations, as
	we will soon see.
	
	The example also shows an else, which specifies an alternative action if the condition part of
	an if statement is false. The general form is
	
		if (expression)
			statement1
		else
			statement2
	
	One and only one of the two statements associated with an if-else is performed. If the
	expression is true, statement1 is executed; if not, statement2 is executed. Each statement can be
	a single statement or several in braces. In the word count program, the one after the else is an
	if that controls two statements in braces.

 */
