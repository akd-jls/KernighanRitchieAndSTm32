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

	This project demonstrates the use of 'Functions Returning Non-integers' in C programming language.
	This program convert string s to double.
	

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

	So far our examples of functions have returned either no value (void) or an int. What if a
	function must return some other type? many numerical functions like sqrt, sin, and cos
	return double; other specialized functions return other types. To illustrate how to deal with
	this, let us write and use the function atof(s), which converts the string s to its doubleprecision
	floating-point equivalent. atof if an extension of atoi, which we showed versions of
	in Chapters 2 and 3. It handles an optional sign and decimal point, and the presence or absence
	of either part or fractional part. Our version is not a high-quality input conversion routine; that
	would take more space than we care to use. The standard library includes an atof; the header
	<stdlib.h> declares it.
	
	First, atof itself must declare the type of value it returns, since it is not int. The type name
	precedes the function name:
	
		double atof(char s[])

	Second, and just as important, the calling routine must know that atof returns a non-int value.
	One way to ensure this is to declare atof explicitly in the calling routine. The declaration is
	shown in this primitive calculator (barely adequate for check-book balancing), which reads one
	number per line, optionally preceded with a sign, and adds them up, printing the running sum
	after each input:
	
		refer to source code
	The declaration
	
		double sum, atof(char []);
		
	says that sum is a double variable, and that atof is a function that takes one char[] argument
	and returns a double.
	
	The function atof must be declared and defined consistently. If atof itself and the call to it in
	main have inconsistent types in the same source file, the error will be detected by the compiler.
	But if (as is more likely) atof were compiled separately, the mismatch would not be detected,
	atof would return a double that main would treat as an int, and meaningless answers would
	result.
	
	In the light of what we have said about how declarations must match definitions, this might
	seem surprising. The reason a mismatch can happen is that if there is no function prototype, a
	function is implicitly declared by its first appearance in an expression, such as
	
		sum += atof(line)
		
	If a name that has not been previously declared occurs in an expression and is followed by a
	left parentheses, it is declared by context to be a function name, the function is assumed to
	return an int, and nothing is assumed about its arguments. Furthermore, if a function
	declaration does not include arguments, as in
	
		double atof();
		
	that too is taken to mean that nothing is to be assumed about the arguments of atof; all
	parameter checking is turned off. This special meaning of the empty argument list is intended
	to permit older C programs to compile with new compilers. But it's a bad idea to use it with
	new C programs. 
	
	If the function takes arguments, declare them; if it takes no arguments, use void.

	Given atof, properly declared, we could write atoi (convert a string to int) in terms of it:
	
		/* atoi: convert string s to integer using atof */
		int atoi(char s[])
		{
			double atof(char s[]);
			return (int) atof(s);
		}

	Notice the structure of the declarations and the return statement. The value of the expression
	in
		return expression;
	
	is converted to the type of the function before the return is taken. Therefore, the value of atof,
	a double, is converted automatically to int when it appears in this return, since the function
	atoi returns an int. This operation does potentionally discard information, however, so some
	compilers warn of it. The cast states explicitly that the operation is intended, and suppresses
	any warning.

 */
