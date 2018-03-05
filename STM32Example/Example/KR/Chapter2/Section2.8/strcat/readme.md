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

	This project demonstrates the use of 'Increment and Decrement Operators' in C programming language.
	This program removes all occurrences of the character c from the string s.
	

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

	As a third example, consider the standard function strcat(s,t), which concatenates the
	string t to the end of string s. strcat assumes that there is enough space in s to hold the
	combination. As we have written it, strcat returns no value; the standard library version
	returns a pointer to the resulting string.
	
		/* strcat: concatenate t to end of s; s must be big enough */
		void strcat(char s[], char t[])
		{
			int i, j;
			i = j = 0;
			while (s[i] != '\0') /* find end of s */
				i++;
			while ((s[i++] = t[j++]) != '\0') /* copy t */
				;
		}
		
	As each member is copied from t to s, the postfix ++ is applied to both i and j to make sure
	that they are in position for the next pass through the loop.
 */
