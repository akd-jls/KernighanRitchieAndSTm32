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

	This project demonstrates the use of 'Pointers and Arrays Address Arithmetic' in C programming language.
	This program demonstrates relationship between pointers and arrays.
	

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


	Pointer subtraction is also valid: if p and q point to elements of the same array, and p<q, then
	q-p+1 is the number of elements from p to q inclusive. 
	
	This fact can be used to write yet another version of strlen. 
	
		refer to source code.
		
	In its declaration, p is initialized to s, that is, to point to the first character of the string. In the
	while loop, each character in turn is examined until the '\0' at the end is seen. Because p
	points to characters, p++ advances p to the next character each time, and p-s gives the number
	of characters advanced over, that is, the string length. 
	
	(The number of characters in the string
	could be too large to store in an int. The header <stddef.h> defines a type ptrdiff_t that is
	large enough to hold the signed difference of two pointer values. 
	
	If we were being cautious,
	however, we would use size_t for the return value of strlen, to match the standard library
	version. size_t is the unsigned integer type returned by the sizeof operator.
	
	Pointer arithmetic is consistent: if we had been dealing with floats, which occupy more
	storage that chars, and if p were a pointer to float, p++ would advance to the next float.
	Thus we could write another version of alloc that maintains floats instead of chars, merely
	by changing char to float throughout alloc and afree. All the pointer manipulations
	automatically take into account the size of the objects pointed to.
	
	The valid pointer operations are: 
	 - assignment of pointers of the same type, 
	 - adding or subtracting a pointer and an integer, 
	 - subtracting or comparing two pointers to members of the same array,
	 - and assigning or comparing to zero. 
	 
	All other pointer arithmetic is illegal. 
	
	It is not legal to: 
	 - add two pointers, 
	 - or to multiply or divide or shift or mask them, 
	 - or to add float or double to them, 
	 - or even, except for void *, to assign a pointer of one type to a pointer of another type without a cast.
 */
