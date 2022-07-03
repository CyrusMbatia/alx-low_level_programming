#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and skip letter q and e using the function putchar
 * *Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'e' && p != 'q')
		putchar(p);
	}
	putchar('\n');
	return (0);
}
