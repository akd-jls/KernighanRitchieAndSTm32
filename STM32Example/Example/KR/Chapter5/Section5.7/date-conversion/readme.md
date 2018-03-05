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

	This project demonstrates the use of 'Multi-dimensional Arrays' in C programming language.
	This program demonstrates Multi-dimensional Arrays.
	

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

C provides rectangular multi-dimensional arrays, although in practice they are much less used
than arrays of pointers.

	In C, a two-dimensional array is
	really a one-dimensional array, each of whose elements is an array. Hence subscripts are
	written as

		daytab[i][j] /* [row][col] */
	rather than
		
		daytab[i,j] /* WRONG */
	
	Other than this notational distinction, a two-dimensional array can be treated in much the same
	way as in other languages. Elements are stored by rows, so the rightmost subscript, or column,
	varies fastest as elements are accessed in storage order.

	An array is initialized by a list of initializers in braces; each row of a two-dimensional array is
	initialized by a corresponding sub-list. We started the array daytab with a column of zero so
	that month numbers can run from the natural 1 to 12 instead of 0 to 11. Since space is not at a
	premium here, this is clearer than adjusting the indices.
	
	If a two-dimensional array is to be passed to a function, the parameter declaration in the
	function must include the number of columns; the number of rows is irrelevant, since what is
	passed is, as before, a pointer to an array of rows, where each row is an array of 13 ints. In
	this particular case, it is a pointer to objects that are arrays of 13 ints. Thus if the array
	daytab is to be passed to a function f, the declaration of f would be:
	
		f(int daytab[2][13]) { ... }
	
	It could also be
	
		f(int daytab[][13]) { ... }
	
	since the number of rows is irrelevant, or it could be
	
		f(int (*daytab)[13]) { ... }
	
	which says that the parameter is a pointer to an array of 13 integers. The parentheses are
	necessary since brackets [] have higher precedence than *. Without parentheses, the
	declaration
	
		int *daytab[13]
	
	is an array of 13 pointers to integers. More generally, only the first dimension (subscript) of an
	array is free; all the others have to be specified.


@note: the parameter declaration in the function must include the number of columns; the number of rows is irrelevant.
	More generally, only the first dimension (subscript) of an array is free; all the others have to be specified.
*/
