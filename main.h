#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * conSp - Prints output according to a format.
 * @spec: specifier
 * @print: functions
 * Description: prints all functions
 */
typedef struct conSp
{
	char *spec;
	int (*print)(va_list);
} conSp;

/*prototypes*/
int _putchar(char c);
int _printf(const char *format, ...);
void _itoa(char *str, int i);
int printf_str(va_list arg);
int printf_percent(va_list arg);
int printf_int(va_list arg);
int printf_char(va_list arg);
int print_unsigned(va_list arg);

#endif
