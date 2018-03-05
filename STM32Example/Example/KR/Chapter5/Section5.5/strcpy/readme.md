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

	This project demonstrates the use of 'Character Pointers and Functions' in C programming language.
	This program demonstrates Character Pointers.
	

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

	A string constant, written as
	
		"I am a string"
	
	is an array of characters. In the internal representation, the array is terminated with the null
	character '\0' so that programs can find the end. The length in storage is thus one more than
	the number of characters between the double quotes.
	
	Perhaps the most common occurrence of string constants is as arguments to functions, as in
	
		printf("hello, world\n");
	
	When a character string like this appears in a program, access to it is through a character
	pointer; printf receives a pointer to the beginning of the character array. That is, a string
	constant is accessed by a pointer to its first element.
	
	String constants need not be function arguments. If pmessage is declared as
	
		char *pmessage;
	
	then the statement
	
		pmessage = "now is the time";
	
	assigns to pmessage a pointer to the character array. This is not a string copy; only pointers
	are involved. C does not provide any operators for processing an entire string of characters as
	a unit.
	
	There is an important difference between these definitions:
	
		char amessage[] = "now is the time"; /* an array */
		char *pmessage = "now is the time"; /* a pointer */
	
	amessage is an array, just big enough to hold the sequence of characters and '\0' that
	initializes it. Individual characters within the array may be changed but amessage will always
	refer to the same storage. 
	
	On the other hand, pmessage is a pointer, initialized to point to a
	string constant; the pointer may subsequently be modified to point elsewhere, but the result is
	undefined if you try to modify the string contents.
	
	We will illustrate more aspects of pointers and arrays by studying versions of two useful
	functions adapted from the standard library. The first function is strcpy(s,t), which copies
	the string t to the string s. It would be nice just to say s=t but this copies the pointer, not the
	characters. To copy the characters, we need a loop. 
	
		The array version first: refer to source code.
		For contrast, here is a version of strcpy with pointers: efer to source code.
		
	Because arguments are passed by value, strcpy can use the parameters s and t in any way it
	pleases. Here they are conveniently initialized pointers, which are marched along the arrays a
	character at a time, until the '\0' that terminates t has been copied into s.
	In practice, strcpy would not be written as we showed it above. Experienced C programmers
	would prefer
	
		refer to source code
		
	This moves the increment of s and t into the test part of the loop. The value of *t++ is the
	character that t pointed to before t was incremented; the postfix ++ doesn't change t until
	after this character has been fetched. In the same way, the character is stored into the old s
	position before s is incremented. This character is also the value that is compared against '\0'
	to control the loop. The net effect is that characters are copied from t to s, up and including
	the terminating '\0'.

	As the final abbreviation, observe that a comparison against '\0' is redundant, since the
	question is merely whether the expression is zero. So the function would likely be written as

		refer to source code

	Although this may seem cryptic at first sight, the notational convenience is considerable, and
	the idiom should be mastered, because you will see it frequently in C programs.
	The strcpy in the standard library (<string.h>) returns the target string as its function value.
	
*/
