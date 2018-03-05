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

	This project demonstrates the use of 'Arrays' in C programming language.
	Let is write a program to count the number of occurrences of each digit, of white space
	characters (blank, tab, newline), and of all other characters. This is artificial, but it permits us
	to illustrate several aspects of C in one program.
	

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

	There are twelve categories of input, so it is convenient to use an array to hold the number of
	occurrences of each digit, rather than ten individual variables. Here is one version of the
	program.
	
		refer to source code.
		
	The declaration
	
		int ndigit[10];
	declares ndigit to be an array of 10 integers. Array subscripts always start at zero in C, so the
	elements are ndigit[0], ndigit[1], ..., ndigit[9]. This is reflected in the for loops
	that initialize and print the array.
	
	A subscript can be any integer expression, which includes integer variables like i, and integer
	constants.
	
	This particular program relies on the properties of the character representation of the digits.
	For example, the test
	
		if (c >= '0' && c <= '9')
	determines whether the character in c is a digit. If it is, the numeric value of that digit is
		c - '0'
	This works only if '0', '1', ..., '9' have consecutive increasing values. Fortunately, this
	is true for all character sets.
	
	By definition, chars are just small integers, so char variables and constants are identical to
	ints in arithmetic expressions. This is natural and convenient; for example c-'0' is an integer
	expression with a value between 0 and 9 corresponding to the character '0' to '9' stored in c,
	and thus a valid subscript for the array ndigit.
	
	The decision as to whether a character is a digit, white space, or something else is made with
	the sequence	

		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
		
	The pattern
		
		if (condition1)
			statement1
		else if (condition2)
			statement2
		...
		...
		else
			statementn

	occurs frequently in programs as a way to express a multi-way decision. The conditions are
	evaluated in order from the top until some condition is satisfied; at that point the
	corresponding statement part is executed, and the entire construction is finished. (Any
	statement can be several statements enclosed in braces.) If none of the conditions is satisfied,
	the statement after the final else is executed if it is present. If the final else and statement are
	omitted, as in the word count program, no action takes place. There can be any number of

		else if(condition)
			statement
	
	groups between the initial if and the final else.
	
	As a matter of style, it is advisable to format this construction as we have shown; if each if
	were indented past the previous else, a long sequence of decisions would march off the right
	side of the page.
	
	The switch statement, to be discussed in Chapter 4, provides another way to write a multiway
	branch that is particulary suitable when the condition is whether some integer or character
	expression matches one of a set of constants. For contrast, we will present a switch version of
	this program in Section 3.4.
	
 */
