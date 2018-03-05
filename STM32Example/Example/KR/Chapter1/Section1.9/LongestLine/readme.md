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

    This project demonstrates the use of 'Character Arrays' in C programming language.
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

	The most common type of array in C is the array of characters. To illustrate the use of
	character arrays and functions to manipulate them, let's write a program that reads a set of text
	lines and prints the longest. The outline is simple enough:
	
		while (there's another line)
			if (it's longer than the previous longest)
				(save it)
				(save its length)
		print longest line
		
	This outline makes it clear that the program divides naturally into pieces. One piece gets a new
	line, another saves it, and the rest controls the process.
	
	Since things divide so nicely, it would be well to write them that way too. Accordingly, let us
	first write a separate function getline to fetch the next line of input. We will try to make the
	function useful in other contexts. At the minimum, getline has to return a signal about
	possible end of file; a more useful design would be to return the length of the line, or zero if
	end of file is encountered. Zero is an acceptable end-of-file return because it is never a valid
	line length. Every text line has at least one character; even a line containing only a newline has
	length 1.
	
	When we find a line that is longer than the previous longest line, it must be saved somewhere.
	This suggests a second function, copy, to copy the new line to a safe place.
	Finally, we need a main program to control getline and copy. Here is the result.
	
	refer to source code.
	
	The functions getline and copy are declared at the beginning of the program, which we
	assume is contained in one file.
	
	main and getline communicate through a pair of arguments and a returned value. In
	getline, the arguments are declared by the line
	
		int getline(char s[], int lim);
	
	which specifies that the first argument, s, is an array, and the second, lim, is an integer. The
	purpose of supplying the size of an array in a declaration is to set aside storage. The length of
	an array s is not necessary in getline since its size is set in main. getline uses return to
	send a value back to the caller, just as the function power did. This line also declares that
	getline returns an int; since int is the default return type, it could be omitted.
	Some functions return a useful value; others, like copy, are used only for their effect and return
	no value. The return type of copy is void, which states explicitly that no value is returned.
	getline puts the character '\0' (the null character, whose value is zero) at the end of the
	array it is creating, to mark the end of the string of characters. This conversion is also used by
	the C language: when a string constant like
	
		"hello\n"
	
	appears in a C program, it is stored as an array of characters containing the characters in the
	string and terminated with a '\0' to mark the end.
	
		_________________
		|h|e|l|l|o|\n|\0|
		-----------------
	
	The %s format specification in printf expects the corresponding argument to be a string
	represented in this form. copy also relies on the fact that its input argument is terminated with
	a '\0', and copies this character into the output.
	
	It is worth mentioning in passing that even a program as small as this one presents some sticky
	design problems. For example, what should main do if it encounters a line which is bigger than
	its limit? getline works safely, in that it stops collecting when the array is full, even if no
	newline has been seen. By testing the length and the last character returned, main can
	determine whether the line was too long, and then cope as it wishes. In the interests of brevity,
	we have ignored this issue.
	
	There is no way for a user of getline to know in advance how long an input line might be, so
	getline checks for overflow. On the other hand, the user of copy already knows (or can find
	out) how big the strings are, so we have chosen not to add error checking to it.

	
 */
