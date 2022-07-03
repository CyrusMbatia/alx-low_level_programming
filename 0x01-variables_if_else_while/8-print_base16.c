#include <stdio.h>

/**
 * main - This program prints all numbers in base 16 in lc
 * and uses the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;
	int i;

	for (p = '0'; p <= '9'; p++)
		putchar(p);
	for (i = 97; i <= 102; i++)
		putchar((int)i);

	putchar('\n');
	return (0);
}
