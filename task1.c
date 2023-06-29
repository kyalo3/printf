#include <stdio.h>
#include <stdarg.h>
/**
* _printf - prints the *format
* @format: character string
*
* Return: number of printed char
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
                if (*format == '%')
                { putchar('%');
                  count++;
                }  else if (*format == 'c')
                { putchar(va_arg(args, int));
                        count++; }
                else if (*format == 's')
                  { char *str = va_arg(args, char *);

		for (; *str; str++)
			{ putchar(*str);
			count++; }
			}
			} }
		else
			{ putchar(*format);
			count++; }
			format++;

	}
va_end(args);
return (count);
}
