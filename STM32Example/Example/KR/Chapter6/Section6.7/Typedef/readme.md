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

	This project demonstrates the use of 'Typedef' in C programming language.
	

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

	C provides a facility called typedef for creating new data type names. For example, the
	declaration
	
		typedef int Length;
	
	makes the name Length a synonym for int. The type Length can be used in declarations,
	casts, etc., in exactly the same ways that the int type can be:
	
		Length len, maxlen;
		Length *lengths[];
	
	Similarly, the declaration
	
		typedef char *String;
	
	makes String a synonym for char * or character pointer, which may then be used in
	declarations and casts:
	
		String p, lineptr[MAXLINES], alloc(int);
		int strcmp(String, String);
		p = (String) malloc(100);
		
	Notice that the type being declared in a typedef appears in the position of a variable name,
	not right after the word typedef. Syntactically, typedef is like the storage classes extern,
	static, etc. We have used capitalized names for typedefs, to make them stand out.
	As a more complicated example, we could make typedefs for the tree nodes shown earlier in
	this chapter:

		typedef struct tnode *Treeptr;
		typedef struct tnode { /* the tree node: */
			char *word; /* points to the text */
			int count; /* number of occurrences */
			struct tnode *left; /* left child */
			struct tnode *right; /* right child */
		} Treenode;
		
	This creates two new type keywords called Treenode (a structure) and Treeptr (a pointer to
	the structure). Then the routine talloc could become
	
		Treeptr talloc(void)
		{
			return (Treeptr) malloc(sizeof(Treenode));
		}
		
	It must be emphasized that a typedef declaration does not create a new type in any sense; it
	merely adds a new name for some existing type. Nor are there any new semantics: variables
	declared this way have exactly the same properties as variables whose declarations are spelled
	out explicitly. In effect, typedef is like #define, except that since it is interpreted by the
	compiler, it can cope with textual substitutions that are beyond the capabilities of the
	preprocessor. For example,
	
		typedef int (*PFI)(char *, char *);
	
	creates the type PFI, for ``pointer to function (of two char * arguments) returning int,''
	which can be used in contexts like

		PFI strcmp, numcmp;
		
	in the sort program of Chapter 5.
	
	Besides purely aesthetic issues, there are two main reasons for using typedefs. The first is to
	parameterize a program against portability problems. If typedefs are used for data types that
	may be machine-dependent, only the typedefs need change when the program is moved. One
	common situation is to use typedef names for various integer quantities, then make an
	appropriate set of choices of short, int, and long for each host machine. Types like size_t
	and ptrdiff_t from the standard library are examples.
	The second purpose of typedefs is to provide better documentation for a program - a type
	called Treeptr may be easier to understand than one declared only as a pointer to a
	complicated structure.
*/
