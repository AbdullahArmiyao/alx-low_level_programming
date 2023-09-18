----------------POINTERS-----------------

This is what most people find confusing

Think of pointers this way
They point directly into the memory allocated to the data type
Think of it as entering into a company's storage unit

Examine the code below

int n = 20;
int *p = &n;

As said above, this gives permission to *p to make changes to the value of n
So if i add this line of code
*p = 25;
This updates the value of n to 25.

For better understanding, examine the simple diagram below

      	 	-----------------
		|	&n	|
pointer(*p) => 	| memory alloc	| <= Data (n)
	    	|  value of n	|
		-----------------
		(alloc = allocated)



----------TASKS----------
	=========

main.h => where all functions to be used later on are declared

0-reset_to_98.c => use the pointer *n to reassign a value to wherever it is pointing to.

1-swap.c =>  function that swaps the values of two integers.

2-strlen.c => function that returns the length of a string

3-puts.c => function that prints a string, followed by a new line, to stdout

4-print_rev.c => function that prints a string, in reverse, followed by a new line

5-rev_string.c => function that reverses a string

6-puts2.c => function that prints every other character of a string, starting with the first character, followed by a new line

7-puts_half.c => function that prints half of a string, followed by a new line.

8-print_array.c => function that prints n elements of an array of integers, followed by a new line

9-strcpy.c => function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest