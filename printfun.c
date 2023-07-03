#include <unistd.h>

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

int print_str(va_list arg)
{
	int count;
	char *str =  va_arg(arg, char *);

	if (str == NULL)
		str = "(NULL)";

	for (count = 0; str[count]; count++;
	{
		_putchar(str[count]);
	}
	return (count);
}

int print_int(va_list arg)
{
	int digit = va_arg(srg, int);
	unsigned int a = 1, i, result, char = 0;

	if (digit < 0)
	{
	_putchar("-");
	char++;
	digit = digit * (-1);
	}

	for (i = 0; digit / c > 9; i++, c *= 10)

	for (; c >= 1; digit %= c, c /= 10, char++)
	{
		result = digit / c;
	}
	return (char);
}
