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
 
	This project demonstrates the use of 'Declarations' in C programming language.

	

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

	All variables must be declared before use, although certain declarations can be made implicitly
	by content. A declaration specifies a type, and contains a list of one or more variables of that
	type, as in
	
		int lower, upper, step;
		char c, line[1000];
		
	Variables can be distributed among declarations in any fashion; the lists above could well be
	written as
	
		int lower;
		int upper;
		int step;
		char c;
		char line[1000];
	
	The latter form takes more space, but is convenient for adding a comment to each declaration
	for subsequent modifications.
	A variable may also be initialized in its declaration. If the name is followed by an equals sign
	and an expression, the expression serves as an initializer, as in
	
		char esc = '\\';
		int i = 0;
		int limit = MAXLINE+1;
		float eps = 1.0e-5;
	
	If the variable in question is not automatic, the initialization is done once only, conceptionally
	before the program starts executing, and the initializer must be a constant expression. An
	explicitly initialized automatic variable is initialized each time the function or block it is in is
	entered; the initializer may be any expression. External and static variables are initialized to
	zero by default. Automatic variables for which is no explicit initializer have undefined (i.e.,
	garbage) values.
	
	The qualifier const can be applied to the declaration of any variable to specify that its value
	will not be changed. For an array, the const qualifier says that the elements will not be altered.
	
		const double e = 2.71828182845905;
		const char msg[] = "warning: ";
	
	The const declaration can also be used with array arguments, to indicate that the function
	does not change that array:
	
		int strlen(const char[]);
	
	The result is implementation-defined if an attempt is made to change a const.	
 */
