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

	This project demonstrates the use of 'If-Else' in C programming language.

	

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

	The if-else statement is used to express decisions. Formally the syntax is

		if (expression)
			statement1
		else
			statement2
			
	where the else part is optional. The expression is evaluated; if it is true (that is, if expression
	has a non-zero value), statement1 is executed. If it is false (expression is zero) and if there is an
	else part, statement2 is executed instead.
	
	Since an if tests the numeric value of an expression, certain coding shortcuts are possible. The
	most obvious is writing
		if (expression)
	
	instead of
		
		if (expression != 0)
	
	Sometimes this is natural and clear; at other times it can be cryptic.
	Because the else part of an if-else is optional,there is an ambiguity when an else if omitted
	from a nested if sequence. This is resolved by associating the else with the closest previous
	else-less if. For example, in
	
		if (n > 0)
			if (a > b)
				z = a;
			else
				z = b;
	
	the else goes to the inner if, as we have shown by indentation. If that isn't what you want,
	braces must be used to force the proper association:
	
		if (n > 0) {
			if (a > b)
				z = a;
			}
		else
			z = b;
	
	The ambiguity is especially pernicious in situations like this:
	
		if (n > 0)
			for (i = 0; i < n; i++)
				if (s[i] > 0) {
					printf("...");
					return i;
				}
		else /* WRONG */
			printf("error -- n is negative\n");
					
	The indentation shows unequivocally what you want, but the compiler doesn't get the message,
	and associates the else with the inner if. This kind of bug can be hard to find; it's a good idea
	to use braces when there are nested ifs.
	
	By the way, notice that there is a semicolon after z = a in
	
		if (a > b)
			z = a;
		else
			z = b;
	
	This is because grammatically, a statement follows the if, and an expression statement like ``z
	= a;'' is always terminated by a semicolon.

 */
