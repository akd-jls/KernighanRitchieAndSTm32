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

	This project demonstrates the use of 'Basics of Structures' in C programming language.
	

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

	A structure is a collection of one or more variables, possibly of different types, grouped
	together under a single name for convenient handling. (Structures are called ``records'' in some
	languages, notably Pascal.) Structures help to organize complicated data, particularly in large
	programs, because they permit a group of related variables to be treated as a unit instead of as
	separate entities.
	
	One traditional example of a structure is the payroll record: an employee is described by a set
	of attributes such as name, address, social security number, salary, etc. Some of these in turn
	could be structures: a name has several components, as does an address and even a salary.
	Another example, more typical for C, comes from graphics: a point is a pair of coordinate, a
	rectangle is a pair of points, and so on.
	
	The main change made by the ANSI standard is to define structure assignment - structures may
	be copied and assigned to, passed to functions, and returned by functions. This has been
	supported by most compilers for many years, but the properties are now precisely defined.
	
	Automatic structures and arrays may now also be initialized.

	Let us create a few structures suitable for graphics. The basic object is a point, which we will
	assume has an x coordinate and a y coordinate, both integers.

	The two components can be placed in a structure declared like this:
	
		struct point {
			int x;
			int y;
		};
	
	The keyword struct introduces a structure declaration, which is a list of declarations enclosed
	in braces. 
	An optional name called a structure tag may follow the word struct (as with point
	here). The tag names this kind of structure, and can be used subsequently as a shorthand for
	the part of the declaration in braces.
	
	The variables named in a structure are called members. A structure member or tag and an
	ordinary (i.e., non-member) variable can have the same name without conflict, since they can
	always be distinguished by context. Furthermore, the same member names may occur in
	different structures, although as a matter of style one would normally use the same names only
	for closely related objects.
	
	A struct declaration defines a type. The right brace that terminates the list of members may
	be followed by a list of variables, just as for any basic type. That is,
		
		struct { ... } x, y, z;
	
	is syntactically analogous to
	
		int x, y, z;
	
	in the sense that each statement declares x, y and z to be variables of the named type and
	causes space to be set aside for them.
	
	A structure declaration that is not followed by a list of variables reserves no storage; it merely
	describes a template or shape of a structure. 
	
	If the declaration is tagged, however, the tag can be used later in definitions of instances of the structure. 
	For example, given the declaration of point above,
	
		struct point pt;
		
	defines a variable pt which is a structure of type struct point. A structure can be initialized
	by following its definition with a list of initializers, each a constant expression, for the
	members:
	
		struct maxpt = { 320, 200 };
	
	An automatic structure may also be initialized by assignment or by calling a function that
	returns a structure of the right type.
	
	A member of a particular structure is referred to in an expression by a construction of the form
	
		structure-name.member

	The structure member operator ``.'' connects the structure name and the member name. To
	print the coordinates of the point pt, for instance,
	
		printf("%d,%d", pt.x, pt.y);
	
	or to compute the distance from the origin (0,0) to pt,
	
		double dist, sqrt(double);
		dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	
	Structures can be nested. One representation of a rectangle is a pair of points that denote the
	diagonally opposite corners:
	
		struct rect {
			struct point pt1;
			struct point pt2;
		};
	
	The rect structure contains two point structures. If we declare screen as
	
		struct rect screen;
	then
	
		screen.pt1.x
	refers to the x coordinate of the pt1 member of screen.
*/
