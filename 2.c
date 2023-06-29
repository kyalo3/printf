#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format.
 * Return: the number of characters printed
 * @format: character string
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
	if (*format == '%')
	{
		format++;
		if (*format == 'b')
		{
			unsigned int num = va_arg(args, unsigned int);
			int bin[32], i = 0;

			while (num > 0)
			{
				bin[i] = num % 2;
				num /= 2;
				i++;
			}
			for (int j = i - 1; j >= 0; j--)
			{
				_printf("%d", bin[j]);
				count++;
			}
			format += 2;
			continue;
		}
	}

	_putchar(*format);
	count++;
	format++;
	}

	va_end(args);
	return (count);
}
