#include "main.h"

/**
* _isalpha - checks if is alpha.
* @c: character to be verified.
*
* Return: 0 or 1.
*/
int _isalpha(int c)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (c == chr)
			return (1);
	}
	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		if (c == chr)
			return (1);
	}
	return (0);
}
