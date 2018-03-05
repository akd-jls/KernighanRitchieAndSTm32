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

	This project demonstrates the use of 'Pointers as Function Arguments' in C programming language.
	This program performs free-format input conversion by
    breaking a stream of characters into integer values, one integer per call.
	

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

	As an example, consider a function getint that performs free-format input conversion by
	breaking a stream of characters into integer values, one integer per call. getint has to return
	the value it found and also signal end of file when there is no more input. These values have to
	be passed back by separate paths, for no matter what value is used for EOF, that could also be
	the value of an input integer.
	
	One solution is to have getint return the end of file status as its function value, while using a
	pointer argument to store the converted integer back in the calling function. This is the scheme
	used by scanf as well; see Section 7.4.
	
	refer to source code.
	
	Notice that it is essential to pass the address of array[n] to getint. Otherwise there is no way for getint
	to communicate the converted integer back to the caller.

	Our version of getint returns EOF for end of file, zero if the next input is not a number, and a
	positive value if the input contains a valid number.


 */
