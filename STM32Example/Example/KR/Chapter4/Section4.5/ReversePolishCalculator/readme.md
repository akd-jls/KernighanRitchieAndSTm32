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

	This project demonstrates the use of 'Header Files' in C programming language.
	This program demonstrates a reverse Polish calculator.
	

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

	Let is now consider dividing the calculator program into several source files, as it might be is
	each of the components were substantially bigger. The main function would go in one file,

	which we will call main.c; push, pop, and their variables go into a second file, stack.c;
	getop goes into a third, getop.c. Finally, getch and ungetch go into a fourth file, getch.c;
	we separate them from the others because they would come from a separately-compiled library
	in a realistic program.
	
	There is one more thing to worry about - the definitions and declarations shared among files.
	As much as possible, we want to centralize this, so that there is only one copy to get and keep
	right as the program evolves. Accordingly, we will place this common material in a header file,
	calc.h, which will be included as necessary. (The #include line is described in Section 4.11.)
	The resulting program then looks like this:

	There is a tradeoff between the desire that each file have access only to the information it
	needs for its job and the practical reality that it is harder to maintain more header files. Up to
	some moderate program size, it is probably best to have one header file that contains
	everything that is to be shared between any two parts of the program; that is the decision we
	made here. For a much larger program, more organization and more headers would be needed.
 */
