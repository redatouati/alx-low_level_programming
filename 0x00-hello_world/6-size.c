#include <stdio.h>


/**
 * main - the entry point
 * @void: no parameters
 *
 * description : writes Programming is like building a multilingual puzzle
 *
 * Return: 0
 */
int main(void)
{
int intType;
long longType;
float floatType;
double doubleType;
char charType;

/**sizeof evaluates the size of a variable**/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
