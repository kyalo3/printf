#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - prints output
 * Return: number of printed char
 * Description: produce output format
 * @format: str char
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
