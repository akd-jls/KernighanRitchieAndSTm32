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

	This project demonstrates the use of 'Register Variables' in C programming language.

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

	A register declaration advises the compiler that the variable in question will be heavily used.
	The idea is that register variables are to be placed in machine registers, which may result in
	smaller and faster programs. But compilers are free to ignore the advice.
	
	The register declaration looks like
	
		register int x;
		register char c;
	
	and so on. The register declaration can only be applied to automatic variables and to the
	formal parameters of a function. In this later case, it looks like
	
		f(register unsigned m, register long n)
		{
			register int i;
			...
		}

	In practice, there are restrictions on register variables, reflecting the realities of underlying
	hardware. Only a few variables in each function may be kept in registers, and only certain types
	are allowed. Excess register declarations are harmless, however, since the word register is
	ignored for excess or disallowed declarations. And it is not possible to take the address of a
	register variable (a topic covered in Chapter 5), regardless of whether the variable is actually
	placed in a register. The specific restrictions on number and types of register variables vary
	from machine to machine.

	In C you can't have Global Register Variables. The compiler will show error.
	
	To overcome this ARM c compiler provides extra storage class specifier '__global_reg' that causes 
	the compiler to reserve a register for a specific global variable. Refer to code for details.
	
	
 */
