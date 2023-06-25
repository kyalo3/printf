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
