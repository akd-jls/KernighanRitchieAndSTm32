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

	This project demonstrates the use of 'Pointer Arrays; Pointers to Pointers' in C programming language.
	This program demonstrates Pointer Arrays; Pointers to Pointers.
	

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

	Since pointers are variables themselves, they can be stored in arrays just as other variables can.
	
	Let us illustrate by writing a program that will sort a set of text lines into alphabetic order, a
	stripped-down version of the UNIX program sort.
	
	In Chapter 3, we presented a Shell sort function that would sort an array of integers, and in
	Chapter 4 we improved on it with a quicksort. The same algorithms will work, except that now
	we have to deal with lines of text, which are of different lengths, and which, unlike integers,
	can't be compared or moved in a single operation. We need a data representation that will cope
	efficiently and conveniently with variable-length text lines.
	
	This is where the array of pointers enters. If the lines to be sorted are stored end-to-end in one
	long character array, then each line can be accessed by a pointer to its first character. The
	pointers themselves can bee stored in an array. Two lines can be compared by passing their
	pointers to strcmp. When two out-of-order lines have to be exchanged, the pointers in the
	pointer array are exchanged, not the text lines themselves.	
	
	This eliminates the twin problems of complicated storage management and high overhead that
	would go with moving the lines themselves.
	
	The sorting process has three steps:
		read all the lines of input
		sort them
		print them in order
	
	As usual, it's best to divide the program into functions that match this natural division, with the
	main routine controlling the other functions. Let us defer the sorting step for a moment, and
	concentrate on the data structure and the input and output.
	
	The input routine has to collect and save the characters of each line, and build an array of
	pointers to the lines. It will also have to count the number of input lines, since that information
	is needed for sorting and printing. Since the input function can only cope with a finite number
	of input lines, it can return some illegal count like -1 if too much input is presented.
	The output routine only has to print the lines in the order in which they appear in the array of
	pointers.
	
		refer to source code.
		
	The main new thing is the declaration for lineptr:
	
		char *lineptr[MAXLINES]
	
	says that lineptr is an array of MAXLINES elements, each element of which is a pointer to a
	char. That is, lineptr[i] is a character pointer, and *lineptr[i] is the character it points
	to, the first character of the i-th saved text line.
	
	Since lineptr is itself the name of an array, it can be treated as a pointer in the same manner
	as in our earlier examples, and writelines can be written instead as
	
	/* writelines: write output lines */
	void writelines(char *lineptr[], int nlines)
	{
		while (nlines-- > 0)
		printf("%s\n", *lineptr++);
	}
	
	Initially, *lineptr points to the first line; each element advances it to the next line pointer
	while nlines is counted down.
	
	With input and output under control, we can proceed to sorting. The quicksort from Chapter 4
	needs minor changes: the declarations have to be modified, and the comparison operation must
	be done by calling strcmp. The algorithm remains the same, which gives us some confidence
	that it will still work.	
	
		refer to source code.
*/
