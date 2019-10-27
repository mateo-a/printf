#include "holberton.h"
/**
 * save_string - save a string into the buffer
 * @args: the list of arguments received
 * @dest: The buffer
 * @pos: Position will when come the buffer
 * Return: Actual length of buffer
 */
int save_string(va_list args, char *dest, int *pos)
{
	int i = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		copyto_buffer(dest, str[i], pos);
		i++;
	}
	return (i);
}
/**
 * save_char - save a char into the buffer
 * @args: the list of arguments received
 * @dest: The buffer
 * @pos: Position will when come the buffer
 * Return: Actual length of buffer
 */
int save_char(va_list args, char *dest, int *pos)
{
	char c = va_arg(args, int);

	copyto_buffer(dest, c, pos);
	return (1);
}
/**
 * save_reverse - save a reverse string into the buffer
 * @args: list of arguments
 * @dest: the buffer
 * @pos: position will when come the buffer
 * Return: Actual length
 */
int save_reverse(va_list args, char *dest, int *pos)
{
	int i = 0, si = 0, j = 0;
	char *str = va_arg(args, char*);
	char letter;

	if (str == NULL)
		str = "(nil)";

	while (str[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while (si < i)
	{
		letter = str[i];
		str[i] = str[si];
		str[si]  = letter;
		si++;
		i--;
	}
	while (str[j] != '\0')
	{
		copyto_buffer(dest, str[j], pos);
		j++;
	}
	return (j);
}
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
int save_decimal (va_list args, char *dest, int *pos)
{
	int number = va_arg(args, int);
	if (number < 0)
	{
		copyto_buffer(dest, '-', pos);
		number = number * -1;
	}
	convert_numbers(dest, number, pos);
}
