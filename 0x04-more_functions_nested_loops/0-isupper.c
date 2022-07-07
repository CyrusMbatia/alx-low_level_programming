#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c : chacters
 *
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if (c <= 99 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
