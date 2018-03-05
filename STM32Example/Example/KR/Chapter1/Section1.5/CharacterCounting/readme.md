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

	This project demonstrates the use of Char Input in programs and their manipulation by an example program 
	that counts characters input to the program.
	
	In most embedded systems you don't need a char input/output from a keybaord/Display. But manipulation of char data
	is a basic programmng requiremet in any embedded systems also.

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

	The statement
	
		++nc;
		
	presents a new operator, ++, which means increment by one. You could instead write nc = nc
	+ 1 but ++nc is more concise and often more efficient. There is a corresponding operator -- to
	decrement by 1. The operators ++ and -- can be either prefix operators (++nc) or postfix
	operators (nc++); these two forms have different values in expressions, as will be shown in
	Chapter 2, but ++nc and nc++ both increment nc. For the moment we will will stick to the
	prefix form.
	
	The character counting program accumulates its count in a long variable instead of an int.
	long integers are at least 32 bits. Although on some machines, int and long are the same size,
	on others an int is 16 bits, with a maximum value of 32767, and it would take relatively little
	input to overflow an int counter. The conversion specification %ld tells printf that the
	corresponding argument is a long integer.
	

 */
