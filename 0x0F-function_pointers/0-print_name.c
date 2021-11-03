#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to print
 * @f: pointer to function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && name != NULL && f)
		(*f)(name);
}
