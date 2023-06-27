#include "main.h"

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
                        if (*format == '\0')
                        break;
                        if (*format == '%')
                        { _putchar('%');
                                count++; }
                        else if (*format == 'c')
                        { _putchar(va_arg(args, int));
                                count++; }
                        else if (*format == 's')
                        {
                                char *str = va_arg(args, char *);

<<<<<<< HEAD
                                for (; *str; str++)
                                { _putchar(*str);
                                        count++; }
                        }
                }
                else
                { _putchar(*format);
                        count++; }
                format++;
        }

        va_end(args);
        return (count);
=======
				for (; *str; str++)
				{ _putchar(*str);
					count++; }
			}
		else
		{ _putchar(*format);
			count++; }
		format++;
	}
	}
	va_end(args);
	return (count);
>>>>>>> 0491dc608527d3c202b822260c5b4be9263a3f43
}
