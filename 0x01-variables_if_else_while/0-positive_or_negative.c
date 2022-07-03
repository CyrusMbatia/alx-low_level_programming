#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable
 * n each time it is executed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
	if
		(n > 0);
	{

		printf("n is positive\n");
	}
	else if
		(n = 0)
	{
		printf("n is zero\n");
	}
	else
	{
		printf("n is negative\n");
	}
}
