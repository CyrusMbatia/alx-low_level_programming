#include <stdio.h>

/**
 * main - This program prints numbers from 0-9
 * and uses the printf
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
		printf("%i", p);

	putchar('\n');
	return (0);
}
