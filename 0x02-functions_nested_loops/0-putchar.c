#include <stdio.h>

/**
 * main - entry point
 * no parrams - void
 *
 * Description : prints _putchar
 * Return : always 0
 */

int main(void)
{
	char c[] = "_putchar";
	int n;
	
	n = 0;
	for (n = 0; n <= 8; n++)
		putchar(c[n]);
	putchar('\n');
	return (0);
}
