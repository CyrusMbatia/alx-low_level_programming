#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * return: void
 */
void _print_rev_recursion(char *s)
{
	
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
