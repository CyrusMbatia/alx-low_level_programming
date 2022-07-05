#include "main.h"

/**
 * print_sign - Prints sign if a statment is true
 * @n: int to check
 *
 * Return: 1 if n is greater than zero and print +
 * Returns 0 if n is equal to zero and print 0
 * Returns -1 if n is less than zero and print -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	
	}
	else 
	{
		_putchar('-');
		return (-1);

	}
}
