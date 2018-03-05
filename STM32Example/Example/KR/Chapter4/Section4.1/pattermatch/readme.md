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

	This project demonstrates the use of 'Basics of Functions' in C programming language.
	This program prints each line of its input that contains a
    particular ``pattern'' or string of characters. (This is a special case of the UNIX program grep.)
	

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

	To begin with, let us design and write a program to print each line of its input that contains a
	particular ``pattern'' or string of characters. (This is a special case of the UNIX program grep.)
	For example, searching for the pattern of letters ``ould'' in the set of lines
	
		Ah Love! could you and I with Fate conspire
		To grasp this sorry Scheme of Things entire,
		Would not we shatter it to bits -- and then
		Re-mould it nearer to the Heart's Desire!
		
	will produce the output

		Ah Love! could you and I with Fate conspire
		Would not we shatter it to bits -- and then
		Re-mould it nearer to the Heart's Desire!

	The job falls neatly into three pieces:

	while (there's another line)
		if (the line contains the pattern)
			print it
	
	Although it's certainly possible to put the code for all of this in main, a better way is to use the
	structure to advantage by making each part a separate function. Three small pieces are better
	to deal with than one big one, because irrelevant details can be buried in the functions, and the
	chance of unwanted interactions is minimized. And the pieces may even be useful in other
	programs.

	``While there's another line'' is getline, a function that we wrote in Chapter 1, and ``print it'' is
	printf, which someone has already provided for us. This means we need only write a routine
	to decide whether the line contains an occurrence of the pattern.
	
	We can solve that problem by writing a function strindex(s,t) that returns the position or
	index in the string s where the string t begins, or -1 if s does not contain t. Because C arrays
	begin at position zero, indexes will be zero or positive, and so a negative value like -1 is
	convenient for signaling failure. When we later need more sophisticated pattern matching, we
	only have to replace strindex; the rest of the code can remain the same. (The standard library
	provides a function strstr that is similar to strindex, except that it returns a pointer instead
	of an index.)
	
	Given this much design, filling in the details of the program is straightforward. Here is the
	whole thing, so you can see how the pieces fit together. For now, the pattern to be searched
	for is a literal string, which is not the most general of mechanisms. We will return shortly to a
	discussion of how to initialize character arrays, and in Chapter 5 will show how to make the
	pattern a parameter that is set when the program is run. There is also a slightly different
	version of getline; you might find it instructive to compare it to the one in Chapter 1.
	
	refer to source code.

	Each function definition has the form
	
	return-type function-name(argument declarations)
	{
		declarations and statements
	}
	
	Various parts may be absent; a minimal function is
	
		dummy() {}
	
	which does nothing and returns nothing. A do-nothing function like this is sometimes useful as
	a place holder during program development. If the return type is omitted, int is assumed.
	
	A program is just a set of definitions of variables and functions. Communication between the
	functions is by arguments and values returned by the functions, and through external variables.
	The functions can occur in any order in the source file, and the source program can be split
	into multiple files, so long as no function is split.
	
	The return statement is the mechanism for returning a value from the called function to its
	caller. Any expression can follow return:
	
		return expression;
	
	The expression will be converted to the return type of the function if necessary. Parentheses
	are often used around the expression, but they are optional.
	The calling function is free to ignore the returned value. Furthermore, there need to be no
	expression after return; in that case, no value is returned to the caller. Control also returns to
	the caller with no value when execution ``falls off the end'' of the function by reaching the
	closing right brace. It is not illegal, but probably a sign of trouble, if a function returns a value
	from one place and no value from another. In any case, if a function fails to return a value, its
	``value'' is certain to be garbage.
	
	The pattern-searching program returns a status from main, the number of matches found. This
	value is available for use by the environment that called the program.
	
 */
