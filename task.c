#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{	return write(1, &c, 1);
}

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{	format++;

	if (*format == '\0')
	break;

	if (*format == '%')
	{
		count += _putchar('%');
	}
	else if (*format == 'c')
	{
		char ch = va_arg(args, int);

		count += _putchar(ch);
	}
		else if (*format == 's')
	{
		char *str = va_arg(args, char *);

		int i = 0;
		while (str[i])
		{
		count += _putchar(str[i]);
		i++;
	}
	}
	}
	else
	{
		count += _putchar(*format);
	}
		format++;
	}

	va_end(args);

	return (count);
}
