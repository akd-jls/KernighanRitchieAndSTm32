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

	This project demonstrates the use of 'Variables and Arithmetic Expressions' in C programming language.
	It codes an example program that uses the formula oC=(5/9)(oF-32) to print the table of Fahrenheit
	temperatures and their centigrade or Celsius equivalents.

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

	The program itself still consists of the definition of a single function named main. It is longer
	than the one that printed ``hello, world'', but not complicated. It introduces several new
	ideas, including comments, declarations, variables, arithmetic expressions, loops , and
	formatted output.	
	
	The two lines
	/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
	
	are a comment, which in this case explains briefly what the program does. Any characters
	between /* and */ are ignored by the compiler; they may be used freely to make a program
	easier to understand. Comments may appear anywhere where a blank, tab or newline can.
	In C, all variables must be declared before they are used, usually at the beginning of the
	function before any executable statements. A declaration announces the properties of
	variables; it consists of a name and a list of variables, such as
	
	int fahr, celsius;
	int lower, upper, step;
	
	The type int means that the variables listed are integers; by contrast with float, which means
	floating point, i.e., numbers that may have a fractional part. The range of both int and float
	depends on the machine you are using; 16-bits ints, which lie between -32768 and +32767,
	are common, as are 32-bit ints. A float number is typically a 32-bit quantity, with at least six
	significant digits and magnitude generally between about 10^-38 and 10^38.
	
@note For STm32 based microcontroller the range of both int and float are 32 bits. 
      32-bits ints lie between –2,147,483,648 to 2,147,483,647.
	  32 bits floats lie between 1.175494351e-38 to 3.40282347e+38 (normalized values).
	
	C provides several other data types besides int and float, including:	
	
	char   : character - a single byte
	short  : short integer
	long   : long integer
	double : double-precision floating point
	
	The size of these objects is also machine-dependent. There are also arrays, structures and
	unions of these basic types, pointers to them, and functions that return them, all of which we
	will meet in due course.
	
	Computation in the temperature conversion program begins with the assignment statements
	
		lower = 0;
		upper = 300;
		step = 20;
	which set the variables to their initial values. Individual statements are terminated by
	semicolons.
	
	Each line of the table is computed the same way, so we use a loop that repeats once per output
	line; this is the purpose of the while loop
	
		while (fahr <= upper) {
			...
		}
	The while loop operates as follows: The condition in parentheses is tested. If it is true (fahr
	is less than or equal to upper), the body of the loop (the three statements enclosed in braces) is
	executed. Then the condition is re-tested, and if true, the body is executed again. When the test
	becomes false (fahr exceeds upper) the loop ends, and execution continues at the statement
	that follows the loop. There are no further statements in this program, so it terminates.
	The body of a while can be one or more statements enclosed in braces, as in the temperature
	converter, or a single statement without braces, as in	
	
	while (i < j)
		i = 2 * i;
	
	In either case, we will always indent the statements controlled by the while by one tab stop
	(which we have shown as four spaces) so you can see at a glance which statements are inside
	the loop. The indentation emphasizes the logical structure of the program. Although C
	compilers do not care about how a program looks, proper indentation and spacing are critical
	in making programs easy for people to read. We recommend writing only one statement per
	line, and using blanks around operators to clarify grouping. The position of braces is less
	important, although people hold passionate beliefs. We have chosen one of several popular
	styles. Pick a style that suits you, then use it consistently.
	
	Most of the work gets done in the body of the loop. The Celsius temperature is computed and
	assigned to the variable celsius by the statement
	
		celsius = 5 * (fahr-32) / 9;
	The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in
	C, as in many other languages, integer division truncates: any fractional part is discarded.
	Since 5 and 9 are integers. 5/9 would be truncated to zero and so all the Celsius temperatures
	would be reported as zero.
	
	This example also shows a bit more of how printf works. printf is a general-purpose
	output formatting function, which we will describe in detail in Chapter 7. Its first argument is a
	string of characters to be printed, with each % indicating where one of the other (second, third,
	...) arguments is to be substituted, and in what form it is to be printed. For instance, %d
	specifies an integer argument, so the statement
	
		printf("%d\t%d\n", fahr, celsius);
	causes the values of the two integers fahr and celsius to be printed, with a tab (\t) between
	them.
	
	Each % construction in the first argument of printf is paired with the corresponding second
	argument, third argument, etc.; they must match up properly by number and type, or you will
	get wrong answers.
	
	By the way, printf is not part of the C language; there is no input or output defined in C
	itself. printf is just a useful function from the standard library of functions that are normally
	accessible to C programs. The behaviour of printf is defined in the ANSI standard, however,
	so its properties should be the same with any compiler and library that conforms to the
	standard.
	
 */
