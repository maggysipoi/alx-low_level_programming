#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * more headers goes there*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}	
