#include "main.h"
#include <stdio.h>

/**
 * _abs(int) - computes the absolute value of an integer
 * @n: The integer to check
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);

	}
	else
		return (n);
}
