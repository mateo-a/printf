#include "holberton.h"
/**
 * _printf - print anything with a format
 * @format: address of format to print
 * @...: variadic arguments to print with format
 * Return: Length of string printed
 */
int _printf(const char *format, ...)
{
	int i = 0, tmpa = 0, length = -1, *pos;
	va_list args;
	vargs b;
	char *dest;

	pos = &tmpa;
	dest = malloc(1024);
	if (dest == NULL)
		return (-1);
	va_start(args, format);
<<<<<<< HEAD
	if (format[i] != '\0')
=======
	if (format != NULL)
>>>>>>> master
	{
		length = 0;
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
<<<<<<< HEAD
					(b).f(args, dest, pos);
=======
					length = (length + (b).f(args, dest, pos)) - 1;
>>>>>>> master
					i++;
				}
				else
					copyto_buffer(dest, format[i], pos);
<<<<<<< HEAD
			}
			i++;
		} length = *pos;
		if (*pos != 1024)
		{
			write(1, dest, *pos);
			free(dest);
		}
	}
=======
			} i++;
			length++;
		}
	}
	if (*pos != 1024)
		write(1, dest, *pos);
	free(dest);
>>>>>>> master
	va_end(args);
	return (length);
}
