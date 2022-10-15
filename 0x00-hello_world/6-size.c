#include <stdio.h>
/**
 * main - the size of various types on the computer
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
	printf("size of a char: %lu byte(s)", sizeof(a));
	printf("\nsize of an int: %lu byte(s)", sizeof(b));
	printf("\nsize of a long int: %lu byte(s)", sizeof(c));
	printf("\nsize of a long long int: %lu byte(s)", sizeof(d));
	printf("\nsize of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
