#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all numbers
 * @n: number of parameters
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0, sum = 0;
	va_list sum_them;

	va_start(sum_them, n);

	while (x < n)
	{
		sum += va_arg(sum_them, unsigned int);
		x++;
		if (n == 0)
		{
		return (0);
		}
		va_end(sum_them);
	}

	return (sum);
}
