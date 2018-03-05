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

	This project demonstrates the use of 'External Variables and their Scope' in C programming language.
	This program reads a set of text lines and prints the longest.
	
@note: scope and lifetime are two very critical aspects of all types variables in C programming language.
	Follow them carefully.
	
@note: You should note that we are using the words definition and declaration carefully when we
	refer to external variables in this section.``Definition'' refers to the place where the variable is
	created or assigned storage; ``declaration'' refers to places where the nature of the variable is
	stated but no storage is allocated.


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

	The variables in main, such as line, longest, etc., are private or local to main. Because they
	are declared within main, no other function can have direct access to them. The same is true of
	the variables in other functions; for example, the variable i in getline is unrelated to the i in
	copy. Each local variable in a function comes into existence only when the function is called,
	and disappears when the function is exited. This is why such variables are usually known as
	automatic variables, following terminology in other languages. We will use the term automatic
	henceforth to refer to these local variables. (Chapter 4 discusses the static storage class, in
	which local variables do retain their values between calls.)
	
	Because automatic variables come and go with function invocation, they do not retain their
	values from one call to the next, and must be explicitly set upon each entry. If they are not set,
	they will contain garbage.
	
	As an alternative to automatic variables, it is possible to define variables that are external to all
	functions, that is, variables that can be accessed by name by any function. (This mechanism is
	rather like Fortran COMMON or Pascal variables declared in the outermost block.) Because
	external variables are globally accessible, they can be used instead of argument lists to
	communicate data between functions. Furthermore, because external variables remain in
	existence permanently, rather than appearing and disappearing as functions are called and
	exited, they retain their values even after the functions that set them have returned.
	
	An external variable must be defined, exactly once, outside of any function; this sets aside
	storage for it. The variable must also be declared in each function that wants to access it; this
	states the type of the variable. The declaration may be an explicit extern statement or may be
	implicit from context. To make the discussion concrete, let us rewrite the longest-line program
	with line, longest, and max as external variables. This requires changing the calls,
	declarations, and bodies of all three functions.

		refer to source code

	The external variables in main, getline and copy are defined by the first lines of the example
	above, which state their type and cause storage to be allocated for them. Syntactically, external
	definitions are just like definitions of local variables, but since they occur outside of functions,
	the variables are external. Before a function can use an external variable, the name of the
	variable must be made known to the function; the declaration is the same as before except for
	the added keyword extern.
	
	In certain circumstances, the extern declaration can be omitted. If the definition of the
	external variable occurs in the source file before its use in a particular function, then there is no
	need for an extern declaration in the function. The extern declarations in main, getline and
	copy are thus redundant. In fact, common practice is to place definitions of all external
	variables at the beginning of the source file, and then omit all extern declarations.
	
	If the program is in several source files, and a variable is defined in file1 and used in file2 and
	file3, then extern declarations are needed in file2 and file3 to connect the occurrences of the
	variable. The usual practice is to collect extern declarations of variables and functions in a
	separate file, historically called a header, that is included by #include at the front of each
	source file. The suffix .h is conventional for header names. The functions of the standard
	library, for example, are declared in headers like <stdio.h>. This topic is discussed at length
	in Chapter 4, and the library itself in Chapter 7 and Appendix B.
	
	Since the specialized versions of getline and copy have no arguments, logic would suggest
	that their prototypes at the beginning of the file should be getline() and copy(). But for
	compatibility with older C programs the standard takes an empty list as an old-style
	declaration, and turns off all argument list checking; the word void must be used for an
	explicitly empty list. We will discuss this further in Chapter 4.
	
	You should note that we are using the words definition and declaration carefully when we
	refer to external variables in this section.``Definition'' refers to the place where the variable is
	created or assigned storage; ``declaration'' refers to places where the nature of the variable is
	stated but no storage is allocated.
		
	By the way, there is a tendency to make everything in sight an extern variable because it
	appears to simplify communications - argument lists are short and variables are always there
	when you want them. But external variables are always there even when you don't want them.
	Relying too heavily on external variables is fraught with peril since it leads to programs whose
	data connections are not all obvious - variables can be changed in unexpected and even
	inadvertent ways, and the program is hard to modify. The second version of the longest-line
	program is inferior to the first, partly for these reasons, and partly because it destroys the
	generality of two useful functions by writing into them the names of the variables they
	manipulate.
	
	At this point we have covered what might be called the conventional core of C. With this
	handful of building blocks, it's possible to write useful programs of considerable size, and it
	would probably be a good idea if you paused long enough to do so. These exercises suggest
	programs of somewhat greater complexity than the ones earlier in this chapter.	
 */
