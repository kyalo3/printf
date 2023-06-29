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

	while (*format)
	{
	if (*format == '%')
	{
		format++;

	if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(args, int);

		count += printf("%d", num);
	}
	}
	else
	{
		putchar(*format);
		count++; }
		format++; }

	va_end(args);

	return (count);
}
