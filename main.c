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
	int len = 0;

	len = _printf("My car is: % s and my wife is: % %", color);
	printf("My car is: % s and my wife is: % %", color);
	printf("Length: %d", len);
	return (0);
}
