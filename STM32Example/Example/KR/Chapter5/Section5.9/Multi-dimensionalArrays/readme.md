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

	This project demonstrates the use of 'Pointers vs. Multi-dimensional Arrays' in C programming language.
	This program demonstrates Pointers vs. Multi-dimensional Arrays.
	

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

	Newcomers to C are sometimes confused about the difference between a two-dimensional
	array and an array of pointers, such as name in the example above. Given the definitions
	
		int a[10][20];
		int *b[10];
		
	then a[3][4] and b[3][4] are both syntactically legal references to a single int. 
	
	But 'a' is a
	true two-dimensional array: 200 int-sized locations have been set aside, and the conventional
	rectangular subscript calculation 20 * row +col is used to find the element a[row,col]. 
	
	For 'b',
	however, the definition only allocates 10 pointers and does not initialize them; initialization
	must be done explicitly, either statically or with code. Assuming that each element of b does
	point to a twenty-element array, then there will be 200 ints set aside, plus ten cells for the
	pointers. The important advantage of the pointer array is that the rows of the array may be of
	different lengths. That is, each element of b need not point to a twenty-element vector; some
	may point to two elements, some to fifty, and some to none at all.
	
	Although we have phrased this discussion in terms of integers, by far the most frequent use of
	arrays of pointers is to store character strings of diverse lengths, as in the function
	month_name. Compare the declaration and picture for an array of pointers:

		char *name[] = { "Illegal month", "Jan", "Feb", "Mar" };
		
	with those for a two-dimensional array:

		char aname[][15] = { "Illegal month", "Jan", "Feb", "Mar" };	
		
	Run the program to see the details difference.	
*/
