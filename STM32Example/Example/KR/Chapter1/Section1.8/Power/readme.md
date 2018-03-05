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

	This project demonstrates the use of 'Functions Arguments - Call by Value' in C programming language.

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

	One aspect of C functions may be unfamiliar to programmers who are used to some other
	languages, particulary Fortran. In C, all function arguments are passed ``by value.'' This means
	that the called function is given the values of its arguments in temporary variables rather than
	the originals. This leads to some different properties than are seen with ``call by reference''
	languages like Fortran or with var parameters in Pascal, in which the called routine has access
	to the original argument, not a local copy.
	
	Call by value is an asset, however, not a liability. It usually leads to more compact programs
	with fewer extraneous variables, because parameters can be treated as conveniently initialized
	local variables in the called routine. For example, here is a version of power that makes use of
	this property.

		refer to source code
		
	The parameter n is used as a temporary variable, and is counted down (a for loop that runs
	backwards) until it becomes zero; there is no longer a need for the variable i. Whatever is
	done to n inside power has no effect on the argument that power was originally called with.

	When necessary, it is possible to arrange for a function to modify a variable in a calling routine.
	The caller must provide the address of the variable to be set (technically a pointer to the
	variable), and the called function must declare the parameter to be a pointer and access the
	variable indirectly through it. We will cover pointers in Chapter 5.
	
	The story is different for arrays. When the name of an array is used as an argument, the value
	passed to the function is the location or address of the beginning of the array - there is no
	copying of array elements. By subscripting this value, the function can access and alter any
	argument of the array. This is the topic of the next section.	
 */
