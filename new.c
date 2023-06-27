#include "main.h"

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
 * _printf - prints the *format
 * @format: character string
 *
 * Return: number of printed char
 */

#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')  /* handle % at the end of the format string */
				break;

	if (*format == '%')  /* handle literal % */
	{
		_putchar('%');
		count++;
	}
	else if (*format == 'c')  /* handle character */
	{
		char ch = va_arg(args, int);
		_putchar(ch);
		count++;
	}
	else if (*format == 's')  /* handle string */
	{
		char *str = va_arg(args, char *);
		int i = 0;

		while (str[i])
		{
			_putchar(str[i]);
			count++;
			i++;
		}
		}
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}
