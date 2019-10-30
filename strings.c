#include "holberton.h"
/**
 * save_rot13 - save an encrypted rot13 string into buffer
 * @args: list of arguments
 * @dest: Buffer
 * @pos: Position of the buffer
 * Return: An String
 */
int save_rot13(va_list args, char *dest, int *pos)
{
	int i, j, length = 0;
	char *rot = va_arg(args, char *);
	char fl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ll[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	if (rot == NULL)
		rot = "(null)";

	for (i = 0; rot[i] != '\0'; i++)
	{
		for (j = 0; fl[j]; j++)
		{
			if (rot[i] == fl[j])
			{
				copyto_buffer(dest, ll[j], pos);
				length++;
				break;
			}
		}
		if (!fl[j])
		{
			copyto_buffer(dest, rot[j], pos);
			length++;
		}
	}
	return (length);
}
/**
 * save_reverse - save the reverse of a string into buffer
 * @args: list of arguments
 * @dest: Buffer
 * @pos: Position of the buffer
 * Return: An String
 */
int save_reverse(va_list args, char *dest, int *pos)
{
	int i = 0, j = 0;
	char *arg, *tmp, sw1, sw2;

	arg = va_arg(args, char *);
	if (arg == NULL)
		arg = "(null)";

	while (arg[i] != '\0')
		i++;

	tmp = malloc(i + 1);
	if (tmp == NULL)
		return (-1);
	while (j < i)
	{
		sw1 = arg[j];
		sw2 = arg[(i - 1) - j];
		tmp[j] = sw2;
		tmp[(i - 1) - j] = sw1;
		copyto_buffer(dest, tmp[j], pos);
		j++;
	}
	free(tmp);
	return (i);
}
