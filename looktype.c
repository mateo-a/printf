#include "holberton.h"
/**
 * looktype - search a type in va_list and save into a buffer
 * @s: string compare to determine the type
 * Return: Call a function
 */
int (*looktype(char s))(va_list args, char *dest, int *pos)
{
	int i = 0;
	vargs calls[] = {
		{'s', save_string},
		{'c', save_char},
//{'%', print_percent},
		{'d', save_integer},
		{'i', save_integer},
		{'b', save_binary},
		{'u', save_un_int},
		{'o', save_octal},
		{'x', save_hex},
		{'X', save_heX},
		{'\0', NULL}
	};
	while (calls[i].typef != '\0')
	{
		if (s == calls[i].typef)
			return (calls[i].f);
		i++;
	}
	return (NULL);
}
