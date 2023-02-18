#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	/* sizeof evaluates the size of a variable */
	printf("size of a char: %lu byte(su)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytr(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));

	return (0);

}	
