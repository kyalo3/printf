#include "main.h"
#include <stdlib.h>
/**
 * _printf - function parameter
 * @format: character strings
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 * Description: prints the *format
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;

	while (*format && (count++, 1))
		if (*format == '%' && *++format)
		{
			if (*format == 'c')
				_putchar((char) va_arg(args, int));
		else if (*format == 's')
		{
			char *str = va_arg(args, char *);

			while (*str)
				_putchar(*str++);
		}
		else if (*format == '%')
			_putchar('%');
		}
			else
			_putchar(*format);

		format++;

	va_end(args);

	return (count);
}
