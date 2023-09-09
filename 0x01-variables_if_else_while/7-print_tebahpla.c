#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 * @void: no parameters
 *
 * description : writes the alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
