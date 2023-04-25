#include"main.h"
/**
 * _print_number - function
 *
 * @n: first variable
 *
 * @k:pointer variable
 *
 * Return: none
 *
 */
void _print_number(int n, int *k)
{
	int a;

	if (n == 0)
	{
		_putchar((n + '0'), k);
	}
	else if (n < 0)
	{
		_putchar(('-'), k);
		for (a = 1000000000; a > 0; a = a / 10)
		{
			if (n / a != 0)
			{
				if (n < -214783648)
					_putchar(((((-n / a) % 10) * -1) + '0'), k);
				else
					_putchar((((-n / a) % 10) + '0'), k);
			}
		}
	}
	else
	{
		for (a = 1000000000; a > 0; a = a / 10)
		{
			if (n / a != 0)
			{
				_putchar(((n / a) % 10 + '0'), k);
			}
		}
	}
}
