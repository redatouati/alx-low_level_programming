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
	
	n = 0;
	while (n < 16)
	{	
		putchar('0' + n);
		++n;
	}	
	putchar('\n');
	return (0);
}
