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
    if (*format == 'b')
	{
        unsigned int num = va_arg(args, unsigned int);
        int bit;
        int printed = 0;
        for (bit = sizeof(unsigned int) * 8 - 1; bit >= 0; bit--)
        {
            putchar((num & (1u << bit)) ? '1' : '0');
            count++;
            printed++;
        }
        if (printed == 0)
        {
            putchar('0');
            count++;
        }
    }
    }
    else 
    {
        putchar(*format);
        count++;
    }
    format++;
    }

    va_end(args);
    return count;
}