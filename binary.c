#include "main.h"
/**
 * _print_binary - prints binary number from input
 * @n: The character to print
 * @k: counter through string
 *
 * Return: void
 */
void _print_binary(int n, int *k)
{
	char c[1000];
	int d = 0;

	while (n)
	{
		if (n & 1)
			c[d] = (1 + '0');
		else
			c[d] = (0 + '0');
		n >>= 1;
		d++;
	}
	d--;
	while (d >= 0)
	{
		_putchar(c[d], k);
		d--;
	}
}
