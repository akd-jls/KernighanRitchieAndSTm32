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

	This project demonstrates the use of 'Pointers and Arrays' in C programming language.
	This program demonstrates relationship between pointers and arrays.
	

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

	In C, there is a strong relationship between pointers and arrays, strong enough that pointers
	and arrays should be discussed simultaneously. Any operation that can be achieved by array
	subscripting can also be done with pointers. The pointer version will in general be faster but, at
	least to the uninitiated, somewhat harder to understand.
	
	The declaration
	
		int a[10];
	
	defines an array of size 10, that is, a block of 10 consecutive objects named a[0], a[1], ...,a[9].

	The notation a[i] refers to the i-th element of the array. If pa is a pointer to an integer,
	declared as
	
		int *pa;
	
	then the assignment
		
		pa = &a[0];
	
	sets pa to point to element zero of a; that is, pa contains the address of a[0].

	Now the assignment
	
	x = *pa;
	
	will copy the contents of a[0] into x.
	
	If pa points to a particular element of an array, then by definition pa+1 points to the next
	element, pa+i points i elements after pa, and pa-i points i elements before. Thus, if pa points
	to a[0],
	
	*(pa+1)
	
	refers to the contents of a[1], pa+i is the address of a[i], and *(pa+i) is the contents of a[i].

	These remarks are true regardless of the type or size of the variables in the array a. The
	meaning of ``adding 1 to a pointer,'' and by extension, all pointer arithmetic, is that pa+1 points
	to the next object, and pa+i points to the i-th object beyond pa.
	
@Note:  pa+1 points to the next object, not next address. The address of next object will depend on size of object. 
		If the Object is of type char, next char object will be at next +1 address, as sizeof of a char object is 1 bytes. 
		If the Object is of type short, next short object will be at next +2 address, as sizeof of a short object is 2 bytes. 
		If the Object is of type int, next int object will be at next +4 address, as sizeof of a int object is 4 bytes on STm32. 
		If the Object is of type Structure of size 10 byes, next Structure object will be at next +10 address, as sizeof of a Structure object is 10 bytes. 
		
		Most of the iniital c programmers confuse here, between next object and next address. 
		In array, by default, next index is next object. Because the index is represented as [], so no confusion.
		In pointer, next index/object is represented as 'pa + 1', programmers do literal "numeric arithmetic" addition, where as they need to do "pointer arithmetic" addition.
		So when handling pointers, must remember difference between 'numeric arithmetic' and 'pointer arithmetic'.

@note: must remeber the word "pointer arithmetic"		
	
	The correspondence between indexing and pointer arithmetic is very close. By definition, the
	value of a variable or expression of type array is the address of element zero of the array. Thus
	after the assignment
	
	pa = &a[0];
	
	pa and a have identical values. Since the name of an array is a synonym for the location of the
	initial element, the assignment pa=&a[0] can also be written as
	
	pa = a;
	
	Rather more surprising, at first sight, is the fact that a reference to a[i] can also be written as
	*(a+i). In evaluating a[i], C converts it to *(a+i) immediately; the two forms are
	equivalent. 
	
	Applying the operator & to both parts of this equivalence, it follows that &a[i] and
	a+i are also identical: a+i is the address of the i-th element beyond a. 
	
	As the other side of this coin, if pa is a pointer, expressions might use it with a subscript; pa[i] is identical to *(pa+i).
	
	
	In short, an array-and-index expression is equivalent to one written as a pointer and offset.
	
	There is one difference between an array name and a pointer that must be kept in mind. 
	
	A pointer is a variable, so pa=a and pa++ are legal. 
	But an array name is not a variable; constructions like

	a = pa and a++ 
	
	are illegal.

	If one is sure that the elements exist, it is also possible to index backwards in an array; p[-1],
	p[-2], and so on are syntactically legal, and refer to the elements that immediately precede
	p[0]. 
	
	Of course, it is illegal to refer to objects that are not within the array bounds.

 */
