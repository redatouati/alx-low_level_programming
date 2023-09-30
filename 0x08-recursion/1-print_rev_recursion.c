#include "main.h"

/**
 * _print_rev_recursion - prints text with recursion in revers
 * @s: the string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
