#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * Return: the number of characters printed
 * @format: character string
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;

	while (*format)
	{
		if (*format == '%')
	{
		format++;
		if (*format == 'c')
		{
		putchar((char) va_arg(args, int));
		count++; }
	else if (*format == 's')
	{
		char *str = va_arg(args, char *);

		while (*str)
		{
		putchar(*str++);
		count++; } }
	else if (*format == '%')
		{
		putchar('%');
		count++; } }
	else
	{
		putchar(*format);
		count++; }
		format++; }

	va_end(args);

	return (count);
}
