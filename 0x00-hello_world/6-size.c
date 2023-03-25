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
printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu size(s)\nSize of a float: %lu byte(s)",(unsigned long)sizeof(c),(unsigned long)sizeof(i),(unsigned long)sizeof(b),(unsigned long)sizeof(d),(unsigned long)sizeof(f));
return (0);
}
