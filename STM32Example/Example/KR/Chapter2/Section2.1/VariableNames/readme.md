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

	This project demonstrates the use of 'Variable Names' in C programming language.
	To a new programmer this topic may look NOT important. But talk to any expreienced 
	programmer, they will explain the importance of this topic. Choosing right variable
	and functions name are as important as the logic of the program you write. So before
	you start writing your C code, decide a style for your coding and follow it rigorously.
	This habbit will help you to become a good programmer.

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

	Although we didn't say so in Chapter 1, there are some restrictions on the names of variables
	and symbolic constants. Names are made up of letters and digits; the first character must be a
	letter. The underscore ``_'' counts as a letter; 
	
		it is sometimes useful for improving the readability of long variable names. 
		
		Don't begin variable names with underscore, however, since library routines often use such names. 
		
		Upper and lower case letters are distinct, so x and X are two different names. 
		
		Traditional C practice is to use lower case for variable names, and all upper case for symbolic constants.
		
		At least the first 31 characters of an internal name are significant. 
		
		For function names and external variables, the number may be less than 31, because external names may be used by
		assemblers and loaders over which the language has no control. 
		
		For external names, the standard guarantees uniqueness only for 6 characters and a single case. 
		
		Keywords like if, else, int, float, etc., are reserved: you can't use them as variable names. 
		They must be in lower case.
		
		It's wise to choose variable names that are related to the purpose of the variable, and that are
		unlikely to get mixed up typographically. 
		
		We tend to use short names for local variables, especially loop indices, and longer names for external variables.

 */
