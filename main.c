#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - start the program
 * Return: Always 0
 */
int main(void)
{
	int len = 0;
	int len2 = 0;
	len = printf("Soy un binario:%b\n", 98);
	len2 =_printf("Soy un binario:%b\n", 98);
	printf("BinaryP%d\n", len);
	_printf("BinaryO:%d\n", len2);

	printf("N:%d\n", NULL);
	_printf("O:%d\n", NULL);
	return (0);
}
