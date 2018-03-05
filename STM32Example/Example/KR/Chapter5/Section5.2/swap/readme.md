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

	This program demonstrates need and benefit of use of pointer in function argument.
	

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

	Since C passes arguments to functions by value, there is no direct way for the called function
	to alter a variable in the calling function. For instance, a sorting routine might exchange two
	out-of-order arguments with a function called swap. It is not enough to write
	
	swap(a, b);
	
	where the swap function is defined as taking int as variables.
	
	refer to source code: 
		void swap_wrong(int x, int y) function.
	
	Because of call by value, swap can't affect the arguments a and b in the routine that called it.
	The function above swaps copies of a and b.

	The way to obtain the desired effect is for the calling program to pass pointers to the values to
	be changed:
	
	swap(&a, &b);
	
	Since the operator & produces the address of a variable, &a is a pointer to a. In swap itself, the
	parameters are declared as pointers, and the operands are accessed indirectly through them.
	
	refer to source code:
		void swap(int *px, int *py) 
	
	Pointer arguments enable a function to access and change objects in the function that called it.
 */
