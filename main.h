#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _printf - Produces output according to a format.
 * @*format: The format string
 * _putchar - prints a character
 * @c: char
 * Return: The number of characters printed
 */

int _putchar(char c);
int _printf(const char *format, ...);
void _itoa(char *str, int i);
#endif
