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

	This project demonstrates the use of 'Pointers and Arrays Address Arithmetic' in C programming language.
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

	If p is a pointer to some element of an array, then p++ increments p to point to the next
	element, and p+=i increments it to point i elements beyond where it currently does. These and
	similar constructions are the simples forms of pointer or address arithmetic.
	
	C is consistent and regular in its approach to address arithmetic; its integration of pointers,
	arrays, and address arithmetic is one of the strengths of the language. 
	
	Let us illustrate by writing a rudimentary storage allocator. 
	
	There are two routines. The first, alloc(n), returns a
	pointer to n consecutive character positions, which can be used by the caller of alloc for
	storing characters. The second, afree(p), releases the storage thus acquired so it can be reused
	later. The routines are ``rudimentary'' because the calls to afree must be made in the
	opposite order to the calls made on alloc. That is, the storage managed by alloc and afree
	is a stack, or last-in, first-out. The standard library provides analogous functions called malloc
	and free that have no such restrictions; in Section 8.7 we will show how they can be
	implemented.
	
	The easiest implementation is to have alloc hand out pieces of a large character array that we
	will call allocbuf. This array is private to alloc and afree. Since they deal in pointers, not
	array indices, no other routine need know the name of the array, which can be declared static
	in the source file containing alloc and afree, and thus be invisible outside it. In practical
	implementations, the array may well not even have a name; it might instead be obtained by
	calling malloc or by asking the operating system for a pointer to some unnamed block of
	storage.
	
	The other information needed is how much of allocbuf has been used. We use a pointer,
	called allocp, that points to the next free element. When alloc is asked for n characters, it
	checks to see if there is enough room left in allocbuf. If so, alloc returns the current value
	of allocp (i.e., the beginning of the free block), then increments it by n to point to the next
	free area. If there is no room, alloc returns zero. afree(p) merely sets allocp to p if p is
	inside allocbuf.
	
		refer to source code.
		
	In general a pointer can be initialized just as any other variable can, though normally the only
	meaningful values are zero or an expression involving the address of previously defined data of
	appropriate type. The declaration
	
		static char *allocp = allocbuf;
	
	defines allocp to be a character pointer and initializes it to point to the beginning of
	allocbuf, which is the next free position when the program starts. This could also have been
	written
	
		static char *allocp = &allocbuf[0];
	
	since the array name is the address of the zeroth element.
	
	The test
		if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
	
	checks if there's enough room to satisfy a request for n characters. If there is, the new value of
	allocp would be at most one beyond the end of allocbuf. If the request can be satisfied,
	alloc returns a pointer to the beginning of a block of characters (notice the declaration of the
	function itself). If not, alloc must return some signal that there is no space left. C guarantees
	that zero is never a valid address for data, so a return value of zero can be used to signal an
	abnormal event, in this case no space.
	
	Pointers and integers are not interchangeable. Zero is the sole exception: the constant zero may
	be assigned to a pointer, and a pointer may be compared with the constant zero. The symbolic	
	constant NULL is often used in place of zero, as a mnemonic to indicate more clearly that this is
	a special value for a pointer. NULL is defined in <stdio.h>. We will use NULL henceforth.
	
	Tests like
		if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
	and
		if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
	
	show several important facets of pointer arithmetic. First, pointers may be compared under
	certain circumstances. If p and q point to members of the same array, then relations like ==, !=,
	<, >=, etc., work properly. For example,
	
		p < q
	is true if p points to an earlier element of the array than q does. Any pointer can be
	meaningfully compared for equality or inequality with zero. But the behavior is undefined for
	arithmetic or comparisons with pointers that do not point to members of the same array.
	(There is one exception: the address of the first element past the end of an array can be used in
	pointer arithmetic.)
	
	Second, we have already observed that a pointer and an integer may be added or subtracted.
	The construction
		p + n
	
	means the address of the n-th object beyond the one p currently points to. This is true
	regardless of the kind of object p points to; n is scaled according to the size of the objects p
	points to, which is determined by the declaration of p. If an int is four bytes, for example, the
	int will be scaled by four.
	
@note: when the construction like 'p + n' used n is scaled according to the size of the objects p
	points to, which is determined by the declaration of p
	
	Pointer subtraction is also valid: if p and q point to elements of the same array, and p<q, then
	q-p+1 is the number of elements from p to q inclusive. 
	
	This fact can be used to write yet another version of strlen. 
	
	
 */
