#include "holberton.h"
/**
 * copyto_buffer - dinamically creates a buffer
 * @dest: Destiny of buffer
 * @letter: letter to copy into destiny
 * @pos: To determine the position don't excede 1024
 */
void copyto_buffer(char *dest, char letter, int *pos)
{
	dest[*pos] = letter;
	*pos = *pos + 1;
	if (*pos == 1024)
	{
		write(1, dest, *pos);
		*pos = 0;
	}
}
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
		str = "(null)";
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
/**
 * save_percent - save a percent into buffer
 * @args: list of arguments to validate
 * @dest: buffer destiny
 * @pos: Last position of buffer
 * Return: Actual length
 */
int save_percent(va_list args, char *dest, int *pos)
{
	(void)(args);
	copyto_buffer(dest, '%', pos);
	return (1);
}
