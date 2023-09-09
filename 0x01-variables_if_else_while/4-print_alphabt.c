#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 * @void: no parameters
 *
 * description : writes the alphabet in exept q and e
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
