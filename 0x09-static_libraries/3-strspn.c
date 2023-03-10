#include "main.h"

/**
 * _strspn - a function that gets the lenght of a prefix
 * @s: initial segment
 * @accept: bytes for s
 * Return:  output
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

