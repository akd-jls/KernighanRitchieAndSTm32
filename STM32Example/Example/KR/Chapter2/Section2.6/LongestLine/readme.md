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

    This project demonstrates the use of 'Relational and Logical Operators' in C programming language.
	This program reads a set of text lines and prints the longest.
	

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

	The relational operators are
	
		> >= < <=
	
	They all have the same precedence. Just below them in precedence are the equality operators:
	
		== !=
	
	Relational operators have lower precedence than arithmetic operators, so an expression like i
	
		< lim-1 is taken as i < (lim-1), as would be expected.

	More interesting are the logical operators && and ||. Expressions connected by && or || are
	evaluated left to right, and evaluation stops as soon as the truth or falsehood of the result is
	known. Most C programs rely on these properties. For example, here is a loop from the input
	function getline that is availabe here in project:
	
		for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
			s[i] = c;
	
	Before reading a new character it is necessary to check that there is room to store it in the
	array s, so the test i < lim-1 must be made first. Moreover, if this test fails, we must not go
	on and read another character.
	
	Similarly, it would be unfortunate if c were tested against EOF before getchar is called;
	therefore the call and assignment must occur before the character in c is tested.
	
	The precedence of && is higher than that of ||, and both are lower than relational and equality
	operators, so expressions like
	
		i < lim-1 && (c=getchar()) != '\n' && c != EOF
	
	need no extra parentheses. But since the precedence of != is higher than assignment,
	parentheses are needed in
	
		(c=getchar()) != '\n'
	
	to achieve the desired result of assignment to c and then comparison with '\n'.
	
	By definition, the numeric value of a relational or logical expression is 1 if the relation is true,
	and 0 if the relation is false.
	
	The unary negation operator ! converts a non-zero operand into 0, and a zero operand in 1. A
	common use of ! is in constructions like
	
		if (!valid)
	
	rather than
		if (valid == 0)
	
	It's hard to generalize about which form is better. Constructions like !valid read nicely (``if
	not valid''), but more complicated ones can be hard to understand.
	
 */
