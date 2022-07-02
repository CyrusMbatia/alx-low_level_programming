#include <stdio.h>
/**
 * main - This program prints all possible combinations of single-digit numbers.
 * and uses the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;
	for (p = 48; p <= 57; p++)
	{
		putchar(p);
		if (p != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
}
