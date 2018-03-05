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

	This project demonstrates the use of 'Conditional Expressions' in C programming language.
	

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

	The statements

		if (a > b)
			z = a;
		else
			z = b;
	
	compute in z the maximum of a and b. The conditional expression, written with the ternary
	operator ``?:'', provides an alternate way to write this and similar constructions. In the
	expression
	
		expr1 ? expr2 : expr3
	
	the expression expr1 is evaluated first. If it is non-zero (true), then the expression expr2 is
	evaluated, and that is the value of the conditional expression. Otherwise expr3 is evaluated, and
	that is the value. Only one of expr2 and expr3 is evaluated. Thus to set z to the maximum of a
	and b,
	
		z = (a > b) ? a : b; /* z = max(a, b) */
	
	It should be noted that the conditional expression is indeed an expression, and it can be used
	wherever any other expression can be. If expr2 and expr3 are of different types, the type of the
	result is determined by the conversion rules discussed earlier in this chapter. For example, if f
	is a float and n an int, then the expression
	
		(n > 0) ? f : n
	
	is of type float regardless of whether n is positive.
	
	Parentheses are not necessary around the first expression of a conditional expression, since the
	precedence of ?: is very low, just above assignment. They are advisable anyway, however,
	since they make the condition part of the expression easier to see.
	
	The conditional expression often leads to succinct code. For example, this loop prints n
	elements of an array, 10 per line, with each column separated by one blank, and with each line
	(including the last) terminated by a newline.
	
		for (i = 0; i < n; i++)
			printf("%6d%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
	
	A newline is printed after every tenth element, and after the n-th. All other elements are
	followed by one blank. This might look tricky, but it's more compact than the equivalent ifelse.
	
	Another good example is
		printf("You have %d items%s.\n", n, n==1 ? "" : "s");	
 */
