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

	This project demonstrates the use of 'Recursion' in C programming language.
	This program demonstrates quicksort.
	

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

	Another good example of recursion is quicksort, a sorting algorithm developed by C.A.R.
	Hoare in 1962. Given an array, one element is chosen and the others partitioned in two subsets
	- those less than the partition element and those greater than or equal to it. The same process is
	then applied recursively to the two subsets. When a subset has fewer than two elements, it
	doesn't need any sorting; this stops the recursion.

	Our version of quicksort is not the fastest possible, but it's one of the simplest. We use the
	middle element of each subarray for partitioning.
	
	refer to source code.
	
	Recursion may provide no saving in storage, since somewhere a stack of the values being
	processed must be maintained. Nor will it be faster. But recursive code is more compact, and
	often much easier to write and understand than the non-recursive equivalent. Recursion is
	especially convenient for recursively defined data structures like trees, we will see a nice
	example in Section 6.6.

 */
