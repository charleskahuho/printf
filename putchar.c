#include"main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @k: counter through string
 * Return: On success 1.
 */
int _putchar(char c, int *k)
{
	*k += 1;
	return (write(1, &c, 1));
}
