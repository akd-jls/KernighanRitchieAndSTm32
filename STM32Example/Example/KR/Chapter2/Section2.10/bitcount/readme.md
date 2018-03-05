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

	This project demonstrates the use of 'Assignment Operators and Expressions' in C programming language.
	This program counts the number of 1-bits in its integer argument.
	

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

	An expression such as

		i = i + 2
	in which the variable on the left side is repeated immediately on the right, can be written in the
	compressed form
	
		i += 2
	The operator += is called an assignment operator.
	
	Most binary operators (operators like + that have a left and right operand) have a
	corresponding assignment operator op=, where op is one of
	
		+ - * / % << >> & ^ |
	
	If expr1 and expr2 are expressions, then
	
		expr1 op= expr2
	
	is equivalent to
	
		expr1 = (expr1) op (expr2)
	
	except that expr1 is computed only once. Notice the parentheses around expr2:
	
		x *= y + 1
	means
	
		x = x * (y + 1)
	
	rather than
	
		x = x * y + 1
		
	As an example, the function bitcount counts the number of 1-bits in its integer argument.

		refer to source code
	
	Declaring the argument x to be an unsigned ensures that when it is right-shifted, vacated bits
	will be filled with zeros, not sign bits, regardless of the machine the program is run on.	
	Quite apart from conciseness, assignment operators have the advantage that they correspond
	better to the way people think. We say ``add 2 to i'' or ``increment i by 2'', not ``take i, add 2,
	then put the result back in i''. Thus the expression i += 2 is preferable to i = i+2. In
	addition, for a complicated expression like
	
		yyval[yypv[p3+p4] + yypv[p1]] += 2
	
	the assignment operator makes the code easier to understand, since the reader doesn't have to
	check painstakingly that two long expressions are indeed the same, or to wonder why they're
	not. And an assignment operator may even help a compiler to produce efficient code.
	
	We have already seen that the assignment statement has a value and can occur in expressions;
	the most common example is
	
		while ((c = getchar()) != EOF)
			...
	
	The other assignment operators (+=, -=, etc.) can also occur in expressions, although this is
	less frequent.
	
	In all such expressions, the type of an assignment expression is the type of its left operand, and
	the value is the value after the assignment.
	
 */
