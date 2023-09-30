#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns if a number  is prime
 * @n: the number to check
 *
 * Return: 1 if prime number 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recirsively
 * @n: number to calculate
 * @i: iterator
 *
 * Return: 1 or 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
