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

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
