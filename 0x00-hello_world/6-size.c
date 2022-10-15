#include <stdio.h>
int main(void)
{
/**
 * main - print the size of various types on the computer
 * Return (0);
 */
char character;
int age;
long int age_of;
long long int age_for;
float number;
	printf("size of a char: %zu byte(s)", sizeof(character));
	printf("\nsize of an int: %zu byte(s)", sizeof(age));
	printf("\nsize of a long int: %zu byte(s)", sizeof(age_of));
	printf("\nsize of a long long int: %zu byte(s)", sizeof(age_for));
	printf("\nsize of a float: %zu byte(s)\n", sizeof(number));
	return (0);
}
