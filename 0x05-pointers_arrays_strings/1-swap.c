/**
* swap_int - swaps the values of two integers
* @a: pointer to int
* @b: pointer to int
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int n;
	int m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
