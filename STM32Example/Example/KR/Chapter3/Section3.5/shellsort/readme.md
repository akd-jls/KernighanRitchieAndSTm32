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

	This program illustrates shellsort.
	

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

	The advantages of keeping loop control centralized are even more obvious when there are
	several nested loops. The following function is a Shell sort for sorting an array of integers. The
	basic idea of this sorting algorithm, which was invented in 1959 by D. L. Shell, is that in early
	stages, far-apart elements are compared, rather than adjacent ones as in simpler interchange
	sorts. This tends to eliminate large amounts of disorder quickly, so later stages have less work
	to do. The interval between compared elements is gradually decreased to one, at which point
	the sort effectively becomes an adjacent interchange method.
	
		refer to source code.

	There are three nested loops. The outermost controls the gap between compared elements,
	shrinking it from n/2 by a factor of two each pass until it becomes zero. The middle loop steps
	along the elements. The innermost loop compares each pair of elements that is separated by
	gap and reverses any that are out of order. Since gap is eventually reduced to one, all elements
	are eventually ordered correctly. Notice how the generality of the for makes the outer loop fit
	in the same form as the others, even though it is not an arithmetic progression.

@note: interchange sorts.	
 */
