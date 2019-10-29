#include "holberton.h"
/**
 * convert_numbers - convert a number into char and copy into buffer
 * @dest: buffer destiny
 * @number: number to convert a char
 * @pos: Last position of buffer
 */
void convert_numbers(char *dest, unsigned int number, int *pos)
{
	long int a;
	char cnumber;

	a = (long) number;
	if (a / 10 != 0)
	{
		convert_numbers(dest, number / 10, pos);
	}
	cnumber = (a % 10) + '0';
	copyto_buffer(dest, cnumber, pos);
}

/**
 * save_decimal - validate a number
 * @args: list of arguments to validate
 * @dest: buffer destiny
 * @pos: Last position of buffer
 * Return: Actual length
 */
int save_decimal(va_list args, char *dest, int *pos)
{
	int number = va_arg(args, int);

	if (number < 0)
	{
		copyto_buffer(dest, '-', pos);
		number = number * -1;
	}
	convert_numbers(dest, number, pos);
	return (strlen_numbers(number));
}
/**
 * strlen_numbers - gets the length of a number
 * @number: Number to knows the length
 * Return: Length of numbers
 */
int strlen_numbers(unsigned int number)
{
	if ((number > 0) && (number / 10 != 0))
		return (1 + strlen_numbers(number / 10));
	return (1);
}
