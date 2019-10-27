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
/**
 * reverstr - reverses
 *
 * @s: string
 * Return: pointer to char
 */
char *reverstr(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}
/**
 * _memcpy - copy memory
 * @dest: Destination
 * @src: Source
 * @n: Number
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
