#include <stdio.h>

/**
 * main - This program prints all possible
 * combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, b;

	for (i = '0'; i <= '8'; i++)
	{
		for (b = i + 1; b <= '9'; b++)
		{
			if (i != b)
			{
				putchar(i);
				putchar(b);
				if (i != '8' || b != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
