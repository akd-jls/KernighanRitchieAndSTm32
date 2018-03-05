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

	This project demonstrates the use of 'Pointers to Functions' in C programming language.
	This program demonstrates Pointers to Functions.
	

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

	In C, a function itself is not a variable, but it is possible to define pointers to functions, which
	can be assigned, placed in arrays, passed to functions, returned by functions, and so on. We
	will illustrate this by modifying the sorting procedure written earlier in this chapter so that if
	the optional argument -n is given, it will sort the input lines numerically instead of
	lexicographically.
	
	A sort often consists of three parts - a comparison that determines the ordering of any pair of
	objects, an exchange that reverses their order, and a sorting algorithm that makes comparisons
	and exchanges until the objects are in order. The sorting algorithm is independent of the
	comparison and exchange operations, so by passing different comparison and exchange
	functions to it, we can arrange to sort by different criteria. This is the approach taken in our
	new sort.
	
	Lexicographic comparison of two lines is done by strcmp, as before; we will also need a
	routine numcmp that compares two lines on the basis of numeric value and returns the same
	kind of condition indication as strcmp does. These functions are declared ahead of main and a
	pointer to the appropriate one is passed to qsort. We have skimped on error processing for
	arguments, so as to concentrate on the main issues.	refer to book.
	
		refer to source code.

	In the call to qsort, strcmp and numcmp are addresses of functions. Since they are known to
	be functions, the & is not necessary, in the same way that it is not needed before an array name.
	We have written qsort so it can process any data type, not just character strings. As indicated
	by the function prototype, qsort expects an array of pointers, two integers, and a function
	with two pointer arguments. The generic pointer type void * is used for the pointer
	arguments. Any pointer can be cast to void * and back again without loss of information, so
	we can call qsort by casting arguments to void *. The elaborate cast of the function
	argument casts the arguments of the comparison function. These will generally have no effect
	on actual representation, but assure the compiler that all is well.
	
		refer to source code.
		
	The declarations should be studied with some care. The fourth parameter of qsort is
	
		int (*comp)(void *, void *)
	
	which says that comp is a pointer to a function that has two void * arguments and returns an
	int.
	
	The use of comp in the line
	
		if ((*comp)(v[i], v[left]) < 0)
	
	is consistent with the declaration: comp is a pointer to a function, *comp is the function, and
	
		(*comp)(v[i], v[left])
	
	is the call to it. The parentheses are needed so the components are correctly associated;
	without them,
	
		int *comp(void *, void *) /* WRONG */
	
	says that comp is a function returning a pointer to an int, which is very different.
	
	We have already shown strcmp, which compares two strings. Here is numcmp, which
	compares two strings on a leading numeric value, computed by calling atof.
	
		refer to source code.
	

*/
