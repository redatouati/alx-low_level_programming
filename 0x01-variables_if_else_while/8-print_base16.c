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
	char ch[8] = "abcdef";
	
	for (n = 0; n < 16; n++)
		putchar('\x', n);
	putchar('\n');
	return (0);
}
