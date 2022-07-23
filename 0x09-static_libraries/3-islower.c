#include "main.h"

/**
 * _islower - check wether we have lowercase or uppercase letter
 * @c: character to check
 * Return: 1 if c is lowercase, otherwise Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
