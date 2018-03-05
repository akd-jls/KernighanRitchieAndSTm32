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

	This project demonstrates the use of 'Pointers and Addresses' in C programming language.
	This program shows how to declare a pointer and how to use & and *.
	

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

	The declaration of x, y, and z are what we've seen all along. The declaration of the pointer ip,

		int *ip;
	is intended as a mnemonic; it says that the expression *ip is an int.
	
	The syntax of the
	declaration for a variable mimics the syntax of expressions in which the variable might appear.

	This reasoning applies to function declarations as well. For example,

	double *dp, atof(char *);
	
	says that in an expression *dp and atof(s) have values of double, and that the argument of
	atof is a pointer to char.
	
	You should also note the implication that a pointer is constrained to point to a particular kind
	of object: every pointer points to a specific data type. (There is one exception: a ``pointer to
	void'' is used to hold any type of pointer but cannot be dereferenced itself. We'll come back to
	it in Section 5.11.)

	If ip points to the integer x, then *ip can occur in any context where x could, so

	*ip = *ip + 10;

	increments *ip by 10.

	The unary operators * and & bind more tightly than arithmetic operators, so the assignment

	y = *ip + 1

	takes whatever ip points at, adds 1, and assigns the result to y, while

	*ip += 1

	increments what ip points to, as do

	++*ip

	and

	(*ip)++

	The parentheses are necessary in this last example; without them, the expression would
	increment ip instead of what it points to, because unary operators like * and ++ associate right
	to left.

	Finally, since pointers are variables, they can be used without dereferencing. For example, if iq
	is another pointer to int,

	iq = ip

	copies the contents of ip into iq, thus making iq point to whatever ip pointed to.


 */
