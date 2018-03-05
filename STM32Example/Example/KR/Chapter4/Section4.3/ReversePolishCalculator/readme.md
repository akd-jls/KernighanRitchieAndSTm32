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

	C program consists of a set of external objects, which are either variables or functions. The
	adjective ``external'' is used in contrast to ``internal'', which describes the arguments and
	variables defined inside functions. External variables are defined outside of any function, and
	are thus potentionally available to many functions. Functions themselves are always external,
	because C does not allow functions to be defined inside other functions. By default, external
	variables and functions have the property that all references to them by the same name, even
	from functions compiled separately, are references to the same thing. (The standard calls this
	property external linkage.) In this sense, external variables are analogous to Fortran
	COMMON blocks or variables in the outermost block in Pascal. We will see later how to
	define external variables and functions that are visible only within a single source file. Because
	external variables are globally accessible, they provide an alternative to function arguments and
	return values for communicating data between functions. Any function may access an external
	variable by referring to it by name, if the name has been declared somehow.
	
	If a large number of variables must be shared among functions, external variables are more
	convenient and efficient than long argument lists. As pointed out in Chapter 1, however, this
	reasoning should be applied with some caution, for it can have a bad effect on program
	structure, and lead to programs with too many data connections between functions.
	
	External variables are also useful because of their greater scope and lifetime. Automatic
	variables are internal to a function; they come into existence when the function is entered, and
	disappear when it is left. External variables, on the other hand, are permanent, so they can
	retain values from one function invocation to the next. Thus if two functions must share some
	data, yet neither calls the other, it is often most convenient if the shared data is kept in external
	variables rather than being passed in and out via arguments.
	
	Let us examine this issue with a larger example. The problem is to write a calculator program
	that provides the operators +, -, * and /. Because it is easier to implement, the calculator will
	use reverse Polish notation instead of infix. (Reverse Polish notation is used by some pocket
	calculators, and in languages like Forth and Postscript.)
	
	In reverse Polish notation, each operator follows its operands; an infix expression like
	
		(1 - 2) * (4 + 5)
	is entered as
	
		1 2 - 4 5 + *
	
	Parentheses are not needed; the notation is unambiguous as long as we know how many
	operands each operator expects.
	
	The implementation is simple. Each operand is pushed onto a stack; when an operator arrives,
	the proper number of operands (two for binary operators) is popped, the operator is applied to
	them, and the result is pushed back onto the stack. In the example above, for instance, 1 and 2
	are pushed, then replaced by their difference, -1. Next, 4 and 5 are pushed and then replaced
	by their sum, 9. The product of -1 and 9, which is -9, replaces them on the stack. The value on
	the top of the stack is popped and printed when the end of the input line is encountered.
	
	The structure of the program is thus a loop that performs the proper operation on each
	operator and operand as it appears:
	
		while (next operator or operand is not end-of-file indicator)
			if (number)
				push it
			else if (operator)
				pop operands
				do operation
				push result
			else if (newline)
				pop and print top of stack
			else
				error

	The operation of pushing and popping a stack are trivial, but by the time error detection and
	recovery are added, they are long enough that it is better to put each in a separate function
	than to repeat the code throughout the whole program. And there should be a separate
	function for fetching the next input operator or operand.
	
	The main design decision that has not yet been discussed is where the stack is, that is, which
	routines access it directly. On possibility is to keep it in main, and pass the stack and the
	current stack position to the routines that push and pop it. But main doesn't need to know
	about the variables that control the stack; it only does push and pop operations. So we have
	decided to store the stack and its associated information in external variables accessible to the
	push and pop functions but not to main.
	
	Translating this outline into code is easy enough. If for now we think of the program as
	existing in one source file, it will look like this:
	
		#includes
		#defines
		function declarations for main
		main() { ... }
	
		external variables for push and pop
		void push( double f) { ... }
		double pop(void) { ... }
		int getop(char s[]) { ... }
		routines called by getop
	
	Later we will discuss how this might be split into two or more source files.

	The function main is a loop containing a big switch on the type of operator or operand; this is
	a more typical use of switch than the one shown in Section 3.4.
	
		refer to source code.
	
	Because + and * are commutative operators, the order in which the popped operands are
	combined is irrelevant, but for - and / the left and right operand must be distinguished. In
	
		push(pop() - pop()); /* WRONG */
	
	the order in which the two calls of pop are evaluated is not defined. To guarantee the right
	order, it is necessary to pop the first value into a temporary variable as we did in main.

		refer to source code.

	A variable is external if it is defined outside of any function. Thus the stack and stack index
	that must be shared by push and pop are defined outside these functions. But main itself does
	not refer to the stack or stack position - the representation can be hidden.
	Let us now turn to the implementation of getop, the function that fetches the next operator or
	operand. The task is easy. Skip blanks and tabs. If the next character is not a digit or a
	hexadecimal point, return it. Otherwise, collect a string of digits (which might include a
	decimal point), and return NUMBER, the signal that a number has been collected.

		refer to source code.

	What are getch and ungetch? It is often the case that a program cannot determine that it has
	read enough input until it has read too much. One instance is collecting characters that make
	up a number: until the first non-digit is seen, the number is not complete. But then the program
	has read one character too far, a character that it is not prepared for.

	The problem would be solved if it were possible to ``un-read'' the unwanted character. Then,
	every time the program reads one character too many, it could push it back on the input, so the
	rest of the code could behave as if it had never been read. Fortunately, it's easy to simulate ungetting
	a character, by writing a pair of cooperating functions. getch delivers the next input
	character to be considered; ungetch will return them before reading new input.

	How they work together is simple. ungetch puts the pushed-back characters into a shared
	buffer -- a character array. getch reads from the buffer if there is anything else, and calls
	getchar if the buffer is empty. There must also be an index variable that records the position
	of the current character in the buffer.

	Since the buffer and the index are shared by getch and ungetch and must retain their values
	between calls, they must be external to both routines. Thus we can write getch, ungetch, and
	their shared variables as:

			refer to source code.

	The standard library includes a function ungetch that provides one character of pushback; we
	will discuss it in Chapter 7. We have used an array for the pushback, rather than a single
	character, to illustrate a more general approach.

 */
