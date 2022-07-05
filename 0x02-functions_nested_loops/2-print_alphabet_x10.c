#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10 times
 * Return always 0
 */
void print_alphabet_x10(void)
{
	int al, j;

	for (j = 0; j < 10; j++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}

		_putchar('\n');
	}

}
