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
<<<<<<< HEAD
=======

>>>>>>> aa89bd279d1b27b0aaadeef6f42d08aabbddf835
	while (*format)
	{
	if (*format == '%')
	{
		format++;
<<<<<<< HEAD
	if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(args, int);

=======

	if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(args, int);

>>>>>>> aa89bd279d1b27b0aaadeef6f42d08aabbddf835
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
