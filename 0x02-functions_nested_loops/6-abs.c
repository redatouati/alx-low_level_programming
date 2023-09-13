#include "main.h"

/**
* _abs - prints absolute value of number.
* @n: number to be verified.
*
* Return: Always 0.
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-n);
	return (0);
}
