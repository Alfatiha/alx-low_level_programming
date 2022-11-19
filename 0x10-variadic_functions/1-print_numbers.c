#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints number
 * @n: numbers to be entered
 * @separator: comma between two numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list fufu;

	va_start(fufu, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(fufu, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(fufu);
}
