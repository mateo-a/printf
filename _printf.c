#include "holberton.h"
/**
 * _printf - print anything with a format
 * @format: address of format to print
 * @...: variadic arguments to print with format
 * Return: Length of string printed
 */
int _printf(const char *format, ...)
{
	int i = 0, tmpa = 0;
	va_list args;
	vargs b;
	int *pos;
	char *dest;

	pos = &tmpa;
	dest = malloc(1024);
	if (dest == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			copyto_buffer(dest, format[i], pos);
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			(b).f = looktype(format[i + 1]);
			if ((b).f != NULL)
			{
				(b).f(args, dest, pos);
				i++;
			}
			else
				copyto_buffer(dest, format[i], pos);
		}
		i++;
	}
	if (*pos != 1024)
	{
		write(1, dest, *pos);
		free(dest);
	}
	va_end(args);
	return (*pos);
}
