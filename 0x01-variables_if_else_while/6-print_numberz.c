#include <stdio.h>

/**
 * main - This program prints single digit btw 0 amd 10
 * and uses the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
		putchar(p);

	putchar('\n');
	return (0);
}
