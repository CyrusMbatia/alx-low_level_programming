#include <stdio.h>

/**
 * main - This program prints the alphabet in reverse case
 * and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	for (p = 'z'; p >= 'a'; p--)
		putchar(p);

	putchar('\n');
	return (0);
}
