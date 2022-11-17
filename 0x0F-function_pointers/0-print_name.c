#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name of the person
 * @f: function name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
