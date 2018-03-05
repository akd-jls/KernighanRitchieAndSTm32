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

	This project demonstrates the use of 'Initialization' in C programming language.

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

	Initialization has been mentioned in passing many times so far, but always peripherally to some
	other topic. This section summarizes some of the rules, now that we have discussed the
	various storage classes.
	
	In the absence of explicit initialization, 
		- external and static variables are guaranteed to be initialized to zero; 
		- automatic and register variables have undefined (i.e., garbage) initial values.
	
	Scalar variables may be initialized when they are defined, by following the name with an equals
	sign and an expression:
	
		int x = 1;
		char squota = '\'';
		long day = 1000L * 60L * 60L * 24L; /* milliseconds/day */
	
	For external and static variables, the initializer must be a constant expression; the initialization
	is done once, conceptionally before the program begins execution. 
	
	For automatic and register variables, the initializer is not restricted to being a constant: it may be any expression involving
	previously defined values, even function calls. 
	
	For example, the initialization of the binary
	search program in Section 3.3 could be written as

		int binsearch(int x, int v[], int n)
		{
			int low = 0;
			int high = n - 1; 

			int mid;
			...
		}
	instead of

		int low, high, mid;
		low = 0;
		high = n - 1;
		
	In effect, initialization of automatic variables are just shorthand for assignment statements.
	
	Which form to prefer is largely a matter of taste. We have generally used explicit assignments,
	because initializers in declarations are harder to see and further away from the point of use.
	
	An array may be initialized by following its declaration with a list of initializers enclosed in
	braces and separated by commas. 
	
	For example, to initialize an array days with the number of
	days in each month:
	
		int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
	
	When the size of the array is omitted, the compiler will compute the length by counting the
	initializers, of which there are 12 in this case.
	
	If there are fewer initializers for an array than the specified size, the others will be zero for
	external, static and automatic variables. 
	
	It is an error to have too many initializers. 
	
	There is no
	way to specify repetition of an initializer, nor to initialize an element in the middle of an array
	without supplying all the preceding values as well.
	
	Character arrays are a special case of initialization; a string may be used instead of the braces
	and commas notation:
	
		char pattern = "ould";
	
	is a shorthand for the longer but equivalent
	
		char pattern[] = { 'o', 'u', 'l', 'd', '\0' };
	
	In this case, the array size is five (four characters plus the terminating '\0').
	
 */
