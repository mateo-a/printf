#include "holberton.h"
/**
 * create_buffer - dinamically creates a buffer
 * @dest: Destiny of buffer
 * @letter: letter to copy into destiny
 * @pos: To determine the position don't excede 1024
 */
void create_buffer(char *dest, char letter, int *pos)
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
 * _printf - print anything with a format
 * @format: address of format to print
 * @...: variadic arguments to print with format
 * Return: Length of string printed
 */
int _printf(const char *format, ...)
{
	int i = 0, tmpa = 0, length;//, j;
	va_list args;
	vargs b;
	int *pos;
	char *dest;

	pos = &tmpa;
	dest = malloc(1024);
	if (dest == NULL)
		return (-1);
	va_start(args, format);
	length = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			create_buffer(dest, format[i], pos);
		else if (format[1] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			(b).f = looktype(format[i + 1]);
			if ((b).f != NULL)
			{
				length = (length + (b).f(args, dest, pos)) - 1;
				i++;
			}
			else
				create_buffer(dest, format[i], pos);
		}
		i++;
	}
	//j = 0;
	if (*pos != 1024)
	{
		write(1, dest, *pos);
		free(dest);
	}
	va_end(args);
	return (i);
}
