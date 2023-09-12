#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * no parrams - void
 *
 * Description : calls function prints_putchar
 * Return : always 0
 */
int main(void)
{
	print_putchar();
	putchar('\n');
	return (0);
}

/**
 * print_putchar - prints _putchar
 * no parrams - void
 *
 * Description : prints _putchar
 * Return 0
 */
void print_putchar(void)
{
	char c[] = "_putchar";
	int n;

	n = 0;
	for (n = 0; n <= 8; n++)
		putchar(c[n]);
}
