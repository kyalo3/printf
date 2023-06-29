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
        unsigned int num;
        int printed = 0;

        if (sizeof(unsigned int) == sizeof(int)
        { 
            num = va_arg(args, unsigned int);
        }
        else
        {
            num = va_arg(args, int);
        }
        for (int bit = sizeof(num) * 8 - 1; bit >= 0; bit--)
        {
            __putchar((num & (1u << bit)) ? '1' : '0');
            count++;
            printed++;
        }
        if (printed == 0)
        {
            _putchar('0');
            count++;
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
