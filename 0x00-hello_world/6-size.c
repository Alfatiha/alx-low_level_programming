#include <stdio.h>
/**
 * main - the size of various types on the computer
 * Return: 0
*/
int main(void)
{
char character;
int age;
long int age_of;
long long int age_for;
float number;
	printf("size of a char: %lu byte(s)", sizeof(character));
	printf("\nsize of an int: %lu byte(s)", sizeof(age));
	printf("\nsize of a long int: %lu byte(s)", sizeof(age_of));
	printf("\nsize of a long long int: %lu byte(s)", sizeof(age_for));
	printf("\nsize of a float: %lu byte(s)\n", sizeof(number));
	return (0);
}
