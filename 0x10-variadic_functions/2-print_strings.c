#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/*
 *print_strings - Prints all arguments
 *@separator: separates strings
 *@n: numbers
 *@...: number of strings
 *Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int a;
	va_list prints;

	va_start(prints, n);

	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		str = va_arg(prints, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prints);
}
