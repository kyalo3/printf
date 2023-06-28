#include <unistd.h>

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
 * _itoa - convert int to string
 * @str: The character string
 * @i: The integer
 *
 * Return: void
 */
void _itoa(char *str, int i)
{
	int rem;

	if (i < 0)
	{
		*str = '-';
		str++;
		i *= -1;
	}
	while (1)
	{
		rem = i % 10;
		i /= 10;
		*str = 48 + rem;
		str++;
		if (i == 0)
		{
			str++;
			*str = '\0';
			break;
		}
	}
}
