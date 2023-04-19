#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: the name to be printed
 * @f: pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
