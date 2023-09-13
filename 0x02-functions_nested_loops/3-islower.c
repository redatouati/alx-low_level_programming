#include "main.h"

/**
* _islower - checks lowercase.
* @c: character to be verified.
*
* Return: Always 0.
*/
int _islower(int c)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (c == chr)
			return (1);
	}
	return (0);
}
