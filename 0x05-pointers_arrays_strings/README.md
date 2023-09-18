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

1-swap.c

2-strlen.c

3-puts.c

4-print_rev.c

5-rev_string.c

6-puts2.c

7-puts_half.c

8-print_array.c

9-strcpy.c