#include "main.h"

int actual_sqrt_requcrsion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to square
 *
 * Return: n squared
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_requcrsion(n, 0));
}

/**
 * actual_sqrt_requcrsion - finds the natural squar of a number by recursion
 * @n: number to square
 * @i: iterator
 *
 * Return: the square root of n
 */
int actual_sqrt_requcrsion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_requcrsion(n, i + 1));
}
