#include "holberton.h"
#include <stdio.h>
/**
 * main - start the program
 * Return: Always 0
 */
int main(void)
{
	char color[] = "blue";
	char wife = 'H';
	int age = 21;
	int len = 0;
	int len2 = 0;

	len = _printf("My car is: %s\t and my wife is: %c, my age is %d\n", color, wife, age);
	len2 = printf("My car is: %s and my wife is: %c, my age is %d\n", color, wife, age);
	printf("Length: %d", len);
	printf("Length: %d", len2);
	return (0);
}
