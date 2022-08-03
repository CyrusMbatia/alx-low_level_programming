#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name of the person
 * @f: function pointer
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
