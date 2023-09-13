#include "main.h"

/**
 * main - entry point
 * no parrams - void
 *
 * Description : calls function prints_alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet
 * no parrams - void
 *
 * Description : prints _putchar
 * Return: void
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int n;

	n = 0;
	for (n = 0; n <= 26; n++)
		putchar(c[n]);
}
