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

	This project demonstrates the use of 'While and For loops' in C programming language.
	This program convert s to integer.
	

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


	In
		while (expression)
			statement
	
	the expression is evaluated. If it is non-zero, statement is executed and expression is reevaluated.
	This cycle continues until expression becomes zero, at which point execution
	resumes after statement.
	
	The for statement
	
		for (expr1; expr2; expr3)
			statement
	
	is equivalent to
	
		expr1;
		while (expr2) {
			statement
			expr3;
		}

	except for the behaviour of continue, which is described in Section 3.7.
	
	Grammatically, the three components of a for loop are expressions. Most commonly, expr1
	and expr3 are assignments or function calls and expr2 is a relational expression. Any of the
	three parts can be omitted, although the semicolons must remain. If expr1 or expr3 is omitted, it
	is simply dropped from the expansion. If the test, expr2, is not present, it is taken as
	permanently true, so
	
		for (;;) {
			...
		}
	is an ``infinite'' loop, presumably to be broken by other means, such as a break or return.
	
	Whether to use while or for is largely a matter of personal preference. For example, in
	
		while ((c = getchar()) == ' ' || c == '\n' || c = '\t')
			; /* skip white space characters */
			
	there is no initialization or re-initialization, so the while is most natural.
	
	The for is preferable when there is a simple initialization and increment since it keeps the loop
	control statements close together and visible at the top of the loop. This is most obvious in

		for (i = 0; i < n; i++)
			...
	
	which is the C idiom for processing the first n elements of an array, the analog of the Fortran
	DO loop or the Pascal for. The analogy is not perfect, however, since the index variable i
	retains its value when the loop terminates for any reason. Because the components of the for
	are arbitrary expressions, for loops are not restricted to arithmetic progressions. Nonetheless,
	it is bad style to force unrelated computations into the initialization and increment of a for,
	which are better reserved for loop control operations.

	As a larger example, here is another version of atoi for converting a string to its numeric
	equivalent. This one is slightly more general than the one in Chapter 2; it copes with optional
	leading white space and an optional + or - sign. (Chapter 4 shows atof, which does the same
	conversion for floating-point numbers.)
	
	The structure of the program reflects the form of the input:
		skip white space, if any
		get sign, if any
		get integer part and convert it
	
	Each step does its part, and leaves things in a clean state for the next. The whole process
	terminates on the first character that could not be part of a number.
	
		refer to source code.

 */
