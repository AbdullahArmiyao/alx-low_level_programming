#include "main.h"

/**
 * print_name - function that prints the name
 *
 * @name: name to be printed
 * @f: pointer to a function tat takes a pointer to a char and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	/* call the function pointer f with the provded name as argument */
	f(name);
}
