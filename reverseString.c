#include"main.h"
/**
 * _rev_string - function
 *
 * @s: string to reverse
 *
 * @k: string size count
 *
 *
 * Return: none
 */
void _rev_string(char *s, int *k)
{
	int length = _strlen(s);
	int count = length - 1;

	while (count >= 0)
	{
		_putchar(s[count], k);
		count--;
	}
}
