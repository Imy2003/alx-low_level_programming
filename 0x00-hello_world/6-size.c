#include <stdio.h>
/**
 * main - A program that prints a line puts function
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int i;
long int b;
long long int d;
float f;
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
