#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 * @void: no parameters
 *
 * description : writes the base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int c;

	n = 0;
	c = 'a';
	while (n < 10)
	{
		putchar('0' + n);
		++n;
	}
	while (c < 'g')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
