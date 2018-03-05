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

	This project demonstrates the use of 'C Preprocessor' in C programming language.
	
	C provides certain language facilities by means of a preprocessor, which is conceptionally a
	separate first step in compilation. The two most frequently used features are #include, to
	include the contents of a file during compilation, and #define, to replace a token by an
	arbitrary sequence of characters. Other features described in this section include conditional
	compilation and macros with arguments.

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

	*** File Inclusion ***
	
	File inclusion makes it easy to handle collections of #defines and declarations (among other
	things). Any source line of the form
	
		#include "filename"
	or
	
		#include <filename>
	
	is replaced by the contents of the file filename. If the filename is quoted, searching for the file
	typically begins where the source program was found; if it is not found there, or if the name is
	enclosed in < and >, searching follows an implementation-defined rule to find the file. An
	included file may itself contain #include lines.
	
	There are often several #include lines at the beginning of a source file, to include common
	#define statements and extern declarations, or to access the function prototype declarations
	for library functions from headers like <stdio.h>. (Strictly speaking, these need not be files;
	the details of how headers are accessed are implementation-dependent.)
	
	#include is the preferred way to tie the declarations together for a large program. It
	guarantees that all the source files will be supplied with the same definitions and variable
	declarations, and thus eliminates a particularly nasty kind of bug. Naturally, when an included
	file is changed, all files that depend on it must be recompiled.
	
	*** Macro Substitution ***

	A definition has the form

		#define name replacement text
		
	It calls for a macro substitution of the simplest kind - subsequent occurrences of the token
	name will be replaced by the replacement text. The name in a #define has the same form as a
	variable name; the replacement text is arbitrary.
	
	Normally the replacement text is the rest of the line, 
	but a long definition may be continued onto several lines by placing a \ at the end of each
	line to be continued. 
	
	The scope of a name defined with #define is from its point of definition
	to the end of the source file being compiled. 
	
	A definition may use previous definitions.
	
	Substitutions are made only for tokens, and do not take place within quoted strings. For
	example, if YES is a defined name, there would be no substitution in printf("YES") or in
	YESMAN.
	
	Any name may be defined with any replacement text. For example
	
		#define forever for (;;) /* infinite loop */
	
	defines a new word, forever, for an infinite loop.
	
	It is also possible to define macros with arguments, so the replacement text can be different for
	different calls of the macro. As an example, define a macro called max:

		#define max(A, B) ((A) > (B) ? (A) : (B))
	
	Although it looks like a function call, a use of max expands into in-line code. Each occurrence
	of a formal parameter (here A or B) will be replaced by the corresponding actual argument.
	Thus the line
	
		x = max(p+q, r+s);
	
	will be replaced by the line
	
		x = ((p+q) > (r+s) ? (p+q) : (r+s));
	
	So long as the arguments are treated consistently, this macro will serve for any data type; there
	is no need for different kinds of max for different data types, as there would be with functions.
	
	If you examine the expansion of max, you will notice some pitfalls. The expressions are
	evaluated twice; this is bad if they involve side effects like increment operators or input and
	output. For instance
	
	max(i++, j++) /* WRONG */
	
	will increment the larger twice. Some care also has to be taken with parentheses to make sure
	the order of evaluation is preserved; consider what happens when the macro
	
		#define square(x) x * x /* WRONG */
	
	is invoked as square(z+1).
	
	Nonetheless, macros are valuable. One practical example comes from <stdio.h>, in which
	getchar and putchar are often defined as macros to avoid the run-time overhead of a
	function call per character processed. The functions in <ctype.h> are also usually
	implemented as macros.
	
	Names may be undefined with #undef, usually to ensure that a routine is really a function, not
	a macro:
	
		#undef getchar
	
		int getchar(void) { ... }
	
	Formal parameters are not replaced within quoted strings. If, however, a parameter name is
	preceded by a # in the replacement text, the combination will be expanded into a quoted string
	with the parameter replaced by the actual argument. This can be combined with string
	concatenation to make, for example, a debugging print macro:
	
		#define dprint(expr) printf(#expr " = %g\n", expr)
	
	When this is invoked, as in
	
		dprint(x/y)
	
	the macro is expanded into
	
		printf("x/y" " = %g\n", x/y);
	
	and the strings are concatenated, so the effect is
	
		printf("x/y = %g\n", x/y);
	
	Within the actual argument, each " is replaced by \" and each \ by \\, so the result is a legal
	string constant.
	
	The preprocessor operator ## provides a way to concatenate actual arguments during macro
	expansion. If a parameter in the replacement text is adjacent to a ##, the parameter is replaced
	by the actual argument, the ## and surrounding white space are removed, and the result is rescanned.
	
	For example, the macro paste concatenates its two arguments:
	
		#define paste(front, back) front ## back
	
	so paste(name, 1) creates the token name1.
	
	The rules for nested uses of ## are arcane; further details may be found in Appendix A.
	
	*** Conditional Inclusion ***

	It is possible to control preprocessing itself with conditional statements that are evaluated
	during preprocessing. This provides a way to include code selectively, depending on the value
	of conditions evaluated during compilation.
	
	The #if line evaluates a constant integer expression (which may not include sizeof, casts, or
	enum constants). If the expression is non-zero, subsequent lines until an #endif or #elif or
	#else are included. (The preprocessor statement #elif is like else-if.) The expression
	defined(name) in a #if is 1 if the name has been defined, and 0 otherwise.
	
	For example, to make sure that the contents of a file hdr.h are included only once, the
	contents of the file are surrounded with a conditional like this:
	
		#if !defined(HDR)
		#define HDR
		/* contents of hdr.h go here */
		#endif
		
	The first inclusion of hdr.h defines the name HDR; subsequent inclusions will find the name
	defined and skip down to the #endif. A similar style can be used to avoid including files
	multiple times. If this style is used consistently, then each header can itself include any other
	headers on which it depends, without the user of the header having to deal with the
	interdependence.
	
	This sequence tests the name SYSTEM to decide which version of a header to include:
	
		#if SYSTEM == SYSV
			#define HDR "sysv.h"
		#elif SYSTEM == BSD
			#define HDR "bsd.h"
		#elif SYSTEM == MSDOS
			#define HDR "msdos.h"
		#else
			#define HDR "default.h"
		#endif
		#include HDR
	
	The #ifdef and #ifndef lines are specialized forms that test whether a name is defined. The
	first example of #if above could have been written
	
		#ifndef HDR
		#define HDR
		/* contents of hdr.h go here */
		#endif


 */
