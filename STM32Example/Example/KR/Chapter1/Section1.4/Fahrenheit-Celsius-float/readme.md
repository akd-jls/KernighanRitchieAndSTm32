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

	This project demonstrates the use of 'Symbolic Constants' in C programming language.
	It codes an example program that uses the formula oC=(5/9)(oF-32) to print the table of Fahrenheit
	temperatures and their centigrade or Celsius equivalents.

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

	A final observation before we leave temperature conversion forever. It's bad practice to bury
	``magic numbers'' like 300 and 20 in a program; they convey little information to someone who
	might have to read the program later, and they are hard to change in a systematic way. One
	way to deal with magic numbers is to give them meaningful names. A #define line defines a
	symbolic name or symbolic constant to be a particular string of characters:
	
		#define name replacement list
	
	Thereafter, any occurrence of name (not in quotes and not part of another name) will be
	replaced by the corresponding replacement text. The name has the same form as a variable
	name: a sequence of letters and digits that begins with a letter. The replacement text can be
	any sequence of characters; it is not limited to numbers.
	
	The quantities LOWER, UPPER and STEP are symbolic constants, not variables, so they do not
	appear in declarations. Symbolic constant names are conventionally written in upper case so
	they can ber readily distinguished from lower case variable names. Notice that there is no
	semicolon at the end of a #define line.

 */
