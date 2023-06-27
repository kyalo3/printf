#include <stdio.h>
#include "main.h"
/**
 * main - prints the main function
 * Description - prints the main
 * Return: 0
 */
int main(void)
{
	int len = 0;
	int len2 = 0;

	len = _printf("A %s sentence\n", "simple");
	len2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	len = _printf("A simple %5 sentence\n");
	len2 = printf("A simple %5 sentence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	len = _printf("%");
	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	len = _printf("A simple sentence%s");
	len2 = printf("\nA simple sentence%s");

	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	return (0);
}
