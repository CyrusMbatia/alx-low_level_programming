#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program outputs a random number to the screen
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("last digit of %dis %d and is greater than S\n",
				n, last_digit);
	else if (last_digit == 0)
		printf("last digit of %d is %d and is 0\n", last - digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	return (0);
}
