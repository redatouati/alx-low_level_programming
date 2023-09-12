#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * no parrams - void
 *
 * Description : calls function prints_alphabet 10x
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	for(n = 0; n <= 10; n++)
	{
		print_alphabet_x10();
	}
	return (0);
}

/**
 * print_alphabet - prints the alphabet
 * no parrams - void
 *
 * Description : prints _putchar
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int n;

	n = 0;
	for (n = 0; n <= 26; n++)
		putchar(c[n]);
}
