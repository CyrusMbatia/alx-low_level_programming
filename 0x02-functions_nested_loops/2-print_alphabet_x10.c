#include "main.h"

/**
 * main -prints 10 times the alphabet, in lowercase, followed by a new line
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
