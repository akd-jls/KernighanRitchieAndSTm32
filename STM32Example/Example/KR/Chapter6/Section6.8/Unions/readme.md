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

	This project demonstrates the use of 'Unions' in C programming language.
	

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

	A union is a variable that may hold (at different times) objects of different types and sizes, with
	the compiler keeping track of size and alignment requirements. Unions provide a way to
	manipulate different kinds of data in a single area of storage, without embedding any machinedependent
	information in the program. They are analogous to variant records in pascal.
	
	As an example such as might be found in a compiler symbol table manager, suppose that a
	constant may be an int, a float, or a character pointer. The value of a particular constant
	must be stored in a variable of the proper type, yet it is most convenient for table management
	if the value occupies the same amount of storage and is stored in the same place regardless of
	its type. This is the purpose of a union - a single variable that can legitimately hold any of one
	of several types. The syntax is based on structures:
	
		union u_tag {
			int ival;
			float fval;
			char *sval;
		} u;
		
	The variable u will be large enough to hold the largest of the three types; the specific size is
	implementation-dependent. Any of these types may be assigned to u and then used in
	expressions, so long as the usage is consistent: the type retrieved must be the type most
	recently stored. It is the programmer's responsibility to keep track of which type is currently
	stored in a union; the results are implementation-dependent if something is stored as one type
	and extracted as another.
	
	Syntactically, members of a union are accessed as
	
		union-name.member
	or
	
		union-pointer->member
		
	just as for structures. If the variable utype is used to keep track of the current type stored in u,
	then one might see code such as
	
		if (utype == INT)
			printf("%d\n", u.ival);
		if (utype == FLOAT)
			printf("%f\n", u.fval);
		if (utype == STRING)
			printf("%s\n", u.sval);
		else
			printf("bad type %d in utype\n", utype);
		
	Unions may occur within structures and arrays, and vice versa. The notation for accessing a
	member of a union in a structure (or vice versa) is identical to that for nested structures. For
	example, in the structure array defined by

		struct {
			char *name;
			int flags;
			int utype;
			union {
				int ival;
				float fval;
				char *sval;
			} u;
		} symtab[NSYM];
		
	the member ival is referred to as
	
		symtab[i].u.ival
		
	and the first character of the string sval by either of
	
		*symtab[i].u.sval
		symtab[i].u.sval[0]
	
	In effect, a union is a structure in which all members have offset zero from the base, the
	structure is big enough to hold the ``widest'' member, and the alignment is appropriate for all
	of the types in the union. The same operations are permitted on unions as on structures:
	assignment to or copying as a unit, taking the address, and accessing a member.
	
	A union may only be initialized with a value of the type of its first member; thus union u
	described above can only be initialized with an integer value.
	
	The storage allocator in Chapter 8 shows how a union can be used to force a variable to be
	aligned on a particular kind of storage boundary.
*/
