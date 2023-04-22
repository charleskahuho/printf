#include"main.h"
#include<stdio.h>
#include<stdarg.h>
#include<stddef.h>
/**
 * printf - function
 * @format: appearnce
 *
 * Return: defined
 */
int int_printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	char c;

	va_start(args, format);
	while ((c = *format) != '\0')
	{
		if (c != '%')
		{
		printf("%c", c);
		count++;
		continue;
		}
	switch (*format)
	{
		case 'c' :
			{
				char ch = va_arg(args, int);
				printf("%c", ch);
				count++;
				break;
			}
		case 's' :
			{
				char *str = va_arg(args, char *);
				while (*str != '\0')
				{
					printf("%c", *str);
					count++;
				}
				break;
			}
		case '%' :
			{
				printf("\%");
				count++;
				break;
			}
		default:
			{
				break;
			}
	}
	}
	va_end(args);
	return count;
}


