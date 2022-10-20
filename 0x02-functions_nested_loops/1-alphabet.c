#include "main.h"
/**
 * print_alphabet - Entry point
 * putchar - print alphabets in lower case
 * Return: void
 */

void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
}
