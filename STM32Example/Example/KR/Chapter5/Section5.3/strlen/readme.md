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

	This project demonstrates the use of 'Pointers and Arrays' in C programming language.
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

	When an array name is passed to a function, what is passed is the location of the initial
	element. Within the called function, this argument is a local variable, and so an array name
	parameter is a pointer, that is, a variable containing an address. We can use this fact to write
	another version of strlen, which computes the length of a string.

		refer to source code
		
	Since s is a pointer, incrementing it is perfectly legal; s++ has no effect on the character string
	in the function that called strlen, but merely increments strlen's private copy of the pointer.
		
	That means that calls like
		strlen("hello, world"); /* string constant */
		strlen(array); 			/* char array[100]; */
		strlen(ptr); 			/* char *ptr; */
	all work.

	As formal parameters in a function definition,
		char s[];
	and
		char *s;
	are equivalent; we prefer the latter because it says more explicitly that the variable is a pointer.

	When an array name is passed to a function, the function can at its convenience believe that it
	has been handed either an array or a pointer, and manipulate it accordingly. It can even use
	both notations if it seems appropriate and clear.
	
	It is possible to pass part of an array to a function, by passing a pointer to the beginning of the
	subarray. For example, if a is an array,
		f(&a[2])
	and
		f(a+2)
	both pass to the function f the address of the subarray that starts at a[2]. Within f, the
	parameter declaration can read
		f(int arr[]) { ... }
	or
		f(int *arr) { ... }
	So as far as f is concerned, the fact that the parameter refers to part of a larger array is of no
	consequence.
	

 */
