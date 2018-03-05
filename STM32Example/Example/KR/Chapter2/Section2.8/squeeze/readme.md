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

	C provides two unusual operators for incrementing and decrementing variables. The increment
	operator ++ adds 1 to its operand, while the decrement operator -- subtracts 1. We have
	frequently used ++ to increment variables, as in

		if (c == '\n')
			++nl;
	
	The unusual aspect is that ++ and -- may be used either as prefix operators (before the
	variable, as in ++n), or postfix operators (after the variable: n++). In both cases, the effect is to
	increment n. 
	
	But the expression ++n increments n before its value is used, while n++
	increments n after its value has been used. 
	
	This means that in a context where the value is
	being used, not just the effect, ++n and n++ are different. If n is 5, then
	
		x = n++;
	sets x to 5, but
		x = ++n;
	sets x to 6. 
	
	In both cases, n becomes 6. The increment and decrement operators can only be
	applied to variables; an expression like (i+j)++ is illegal.
	
	In a context where no value is wanted, just the incrementing effect, as in
	
		if (c == '\n')
			nl++;
	
	prefix and postfix are the same. But there are situations where one or the other is specifically
	called for. For instance, consider the function squeeze(s,c), which removes all occurrences
	of the character c from the string s.
		/* squeeze: delete all c from s */
		void squeeze(char s[], int c)
		{
			int i, j;
			for (i = j = 0; s[i] != '\0'; i++)
			if (s[i] != c)
			s[j++] = s[i];
			s[j] = '\0';
		}
	Each time a non-c occurs, it is copied into the current j position, and only then is j
	incremented to be ready for the next character. This is exactly equivalent to
	
		if (s[i] != c) {
			s[j] = s[i];
			j++;
		}
	Another example of a similar construction comes from the getline function that we wrote in
	Chapter 1, where we can replace
	
		if (c == '\n') {
			s[i] = c;
			++i;
		}
	by the more compact
	
		if (c == '\n')
			s[i++] = c;

 */
