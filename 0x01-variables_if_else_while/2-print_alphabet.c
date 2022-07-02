#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and uses the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);

	putchar('\n');
	return (0);
}
