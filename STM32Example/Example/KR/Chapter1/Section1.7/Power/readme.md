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

	This project demonstrates the use of 'Functions' in C programming language.
	Here is the function power and a main program to exercise it, so you can see the whole
	structure at once
	

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

	In C, a function is equivalent to a subroutine or function in Fortran, or a procedure or function
	in Pascal. A function provides a convenient way to encapsulate some computation, which can
	then be used without worrying about its implementation. With properly designed functions, it
	is possible to ignore how a job is done; knowing what is done is sufficient. C makes the use of
	functions easy, convinient and efficient; you will often see a short function defined and called
	only once, just because it clarifies some piece of code.
	
	So far we have used only functions like printf, getchar and putchar that have been
	provided for us; now it's time to write a few of our own. Since C has no exponentiation
	operator like the ** of Fortran, let us illustrate the mechanics of function definition by writing
	a function power(m,n) to raise an integer m to a positive integer power n. That is, the value of
	power(2,5) is 32. This function is not a practical exponentiation routine, since it handles only
	positive powers of small integers, but it's good enough for illustration.(The standard library
	contains a function pow(x,y) that computes x^y.)
	
	refer to source code.
	
	A function definition has this form:
	
		return-type function-name(parameter declarations, if any)
		{
			declarations
			statements
		}
		
	Function definitions can appear in any order, and in one source file or several, although no
	function can be split between files. If the source program appears in several files, you may have
	to say more to compile and load it than if it all appears in one, but that is an operating system
	matter, not a language attribute. For the moment, we will assume that both functions are in the
	same file, so whatever you have learned about running C programs will still work.
	
	The function power is called twice by main, in the line
	
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	
	Each call passes two arguments to power, which each time returns an integer to be formatted
	and printed. In an expression, power(2,i) is an integer just as 2 and i are. (Not all functions
	produce an integer value; we will take this up in Chapter 4.)
	
	The first line of power itself,
	
		int power(int base, int n)
	
	declares the parameter types and names, and the type of the result that the function returns.
	The names used by power for its parameters are local to power, and are not visible to any
	other function: other routines can use the same names without conflict. This is also true of the
	variables i and p: the i in power is unrelated to the i in main.
	
	We will generally use parameter for a variable named in the parenthesized list in a function.
	The terms formal argument and actual argument are sometimes used for the same distinction.
	The value that power computes is returned to main by the return: statement. Any expression
	may follow return:
	
		return expression;
	
	A function need not return a value; a return statement with no expression causes control, but
	no useful value, to be returned to the caller, as does ``falling off the end'' of a function by
	reaching the terminating right brace. And the calling function can ignore a value returned by a
	function.
	
	You may have noticed that there is a return statement at the end of main. Since main is a
	function like any other, it may return a value to its caller, which is in effect the environment in
	which the program was executed. Typically, a return value of zero implies normal termination;
	non-zero values signal unusual or erroneous termination conditions. In the interests of
	simplicity, we have omitted return statements from our main functions up to this point, but
	we will include them hereafter, as a reminder that programs should return status to their
	environment.
	
	The declaration
	
		int power(int base, int n);
	
	just before main says that power is a function that expects two int arguments and returns an
	int. This declaration, which is called a function prototype, has to agree with the definition and
	uses of power. It is an error if the definition of a function or any uses of it do not agree with its
	prototype.
	
	parameter names need not agree. Indeed, parameter names are optional in a function
	prototype, so for the prototype we could have written
	
		int power(int, int);
	
	Well-chosen names are good documentation however, so we will often use them.
	
 */
