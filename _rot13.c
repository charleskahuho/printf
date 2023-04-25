#include "main.h"
/**
 * _rot13 - function that encodes a string using rot13
 * @s: string
 * @k: counter through string
 * Return: void
 */
void _rot13(char *s, int *k)
{
	int p, d;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (d = 0; letters[d] != '\0'; d++)
		{
			if (s[d] == letters[d])
			{
				_putchar(rot[d], k);
				break;
			}
		}
		if ((!(s[p] > 96 && s[p] < 123)) && (!(s[d] > 64 && s[d] < 91)))
			_putchar(s[p], k);
	}
}

