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
		create_buffer(dest, str[i], pos);
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

	create_buffer(dest, c, pos);
	return (1);
}
