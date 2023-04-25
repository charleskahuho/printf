#include "main.h"

/**
 * _printf - is a function that formats and prints data
 * @format: format of data
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *p;
	unsigned int i;
	int t;
	int m = 0;
	va_list conspc;
	char *s;

	if (!format)
	{
		return (-1);
	}
	va_start(conspc, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &m);
			continue;
		}
		p++;
		switch (*p)
		{
		case 'c':
			i = va_arg(conspc, int);
			_putchar(i, &m);
			break;
		case 's':
			s = va_arg(conspc, char *);
			_puts(s, &m);
			break;
		case '%':
			_putchar('%', &m);
			break;
		case 'd':
			t = va_arg(conspc, int);
			_print_number(j, &m);
			break;
		case 'i':
			t = va_arg(conspc, int);
			_print_number(j, &m);
			break;
		case 'r':
			s = va_arg(conspc, char *);
			_rev_string(s, &m);
			break;
		case 'b':
			i = va_arg(conspc, int);
			_print_binary(i, &m);
			break;
		case 'R':
			s = va_arg(conspc, char *);
			_rot13(s, &m);
			break;
		case '\0':
			return (-1);
		default:
			_putchar('%', &m);
			_putchar(*p, &m);
		}
	}
	va_end(conspc);
	return (m);
}
