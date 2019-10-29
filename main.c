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
	len = printf("%d", -1024);
	len2 =_printf("%d", -1024);
	printf("lengthN:%d\n", len);
	_printf("lengthO:%d\n", len2);
	return (0);
}
