#include"main.h"
/**
 * _strlen - function
 *
 * @s: character pointer
 *
 * Return: none
 */
int _strlen(char *s)
{
	char *copy_s = s;
	int leng = 0;

	while (*copy_s != '\0')
	{
		leng++;
		copy_s++;
	}
	return (leng);
}
