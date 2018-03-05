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

	This project demonstrates the use of 'Scope Rules' in C programming language.
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

	The functions and external variables that make up a C program need not all be compiled at the
	same time; the source text of the program may be kept in several files, and previously compiled
	routines may be loaded from libraries. 
	
	Among the questions of interest are
	
		· How are declarations written so that variables are properly declared during compilation?
		· How are declarations arranged so that all the pieces will be properly connected when the program is loaded?
		· How are declarations organized so there is only one copy?
		· How are external variables initialized?
		
	Let us discuss these topics by reorganizing the calculator program into several files. As a
	practical matter, the calculator is too small to be worth splitting, but it is a fine illustration of
	the issues that arise in larger programs.
	
	The scope of a name is the part of the program within which the name can be used. For an
	automatic variable declared at the beginning of a function, the scope is the function in which
	the name is declared. 
	
	Local variables of the same name in different functions are unrelated. 
	
	The same is true of the parameters of the function, which are in effect local variables.
	
	The scope of an external variable or a function lasts from the point at which it is declared to
	the end of the file being compiled. For example, if main, sp, val, push, and pop are defined in
	one file, in the order shown above, that is,
	
		main() { ... }
		int sp = 0;
		double val[MAXVAL];
		void push(double f) { ... }
		double pop(void) { ... }
		
	then the variables sp and val may be used in push and pop simply by naming them; no further
	declarations are needed. But these names are not visible in main, nor are push and pop
	themselves.
	
	On the other hand, if an external variable is to be referred to before it is defined, or if it is
	defined in a different source file from the one where it is being used, then an extern
	declaration is mandatory.
	
	It is important to distinguish between the declaration of an external variable and its definition.
	A declaration announces the properties of a variable (primarily its type); a definition also
	causes storage to be set aside. If the lines
	
		int sp;
		double val[MAXVAL];
		
	appear outside of any function, they define the external variables sp and val, cause storage to
	be set aside, and also serve as the declarations for the rest of that source file. On the other
	hand, the lines
	
		extern int sp;
		extern double val[];
		
	declare for the rest of the source file that sp is an int and that val is a double array (whose
	size is determined elsewhere), but they do not create the variables or reserve storage for them.
	
	There must be only one definition of an external variable among all the files that make up the
	source program; other files may contain extern declarations to access it. (There may also be
	extern declarations in the file containing the definition.) 
	
	Array sizes must be specified with the definition, but are optional with an extern declaration.
	
	Initialization of an external variable goes only with the definition.
	
	Although it is not a likely organization for this program, the functions push and pop could be
	defined in one file, and the variables val and sp defined and initialized in another. Then these
	definitions and declarations would be necessary to tie them together:
	
	in file1:
	
		extern int sp;
		extern double val[];
		void push(double f) { ... }
		double pop(void) { ... }
	in file2:
	
		int sp = 0;
		double val[MAXVAL];
	
	Because the extern declarations in file1 lie ahead of and outside the function definitions, they
	apply to all functions; one set of declarations suffices for all of file1. This same organization
	would also bee needed if the definition of sp and val followed their use in one file.
 */
