#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter
 * @array: array to func
 * @size: size of array
 * @action: pointer to the function used
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l;

	if (array && action)
	{
		l = 0;
		while (l < size)
		{
			action(array[l]);
			l++;
		}
	}
}

