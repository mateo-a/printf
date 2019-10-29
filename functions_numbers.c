#include "holberton.h"
/**
 * save_number - save a number
 * @args: List of arguments
 * @dest: Destiny to copy
 * @pos: Position of destiny
 * Return: The length
 */
int save_number(va_list args, char *dest, int *pos)
{
	int n, div, len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len++;
		copyto_buffer(dest, '-', pos);
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len++;
		copyto_buffer(dest, ('0' + num / div), pos);
		num %= div;
		div /= 10;
	}

	return (len);
}
