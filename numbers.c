#include "holberton.h"

/**
 * save_number - save a number
 * @args: List of arguments
 * Return: The number
 */
int save_number(va_list args, char *dest, int *pos)
{
	int n, div, len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		//len += _putchar('-');
		copyto_buffer(dest, '-', pos);
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		//len += _putchar('0' + num / div);
		copyto_buffer(dest, '0' + num / div, pos);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * unsgined_number - unsigned number
 * @n: unsigned integer
 * Return: number
 */
int unsigned_number(va_list args, char *dest, int *pos)
//int unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = va_arg(args, unsigned int);

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		//len += _putchar('0' + num / div);
		copyto_buffer(dest, '0' + num / div, pos);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * save_integer - integer
 * @list: list of arguments
 * Return: number
 */
int save_integer(va_list list, char *dest, int *pos)
{
	int num_length;

	num_length = save_number(list, dest, pos);
	return (num_length);
}
/**
 * save_un_int - unsigned integers
 * @list: argumets
 * Return: number
 */
int save_un_int(va_list list, char *dest, int *pos)
//int save_un_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		return (unsigned_number(list, dest, pos));
		//return (unsgined_number(num));
	}

	if (num < 1)
		return (-1);
	return (unsigned_number(list, dest, pos));
}
/**
 * save_binary - number from base 10 to binary
 * @list: arguments
 * Return: number
 */
int save_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = _base(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = reverstr(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * save_octal - number in octal base
 * @list: arguments
 * Return: Number in octal
 */
int save_octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = _base(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal_rep[len] = '\0';
	rev_str = reverstr(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}

/**
 * save_hex - decimal number base16 lowercase
 * @list: rguments
 * Return: Number
 */
int save_hex(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = _base(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = is_hex(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = reverstr(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}
/**
 * save_heX - decimal number base16 Uppercase
 * @list: arguments
 * Return: Number
 */
int save_heX(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = _base(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = is_hex(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = reverstr(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}
/**
 * is_hex - validate if is hex or Hex
 * @num: Number
 * @x: char
 * Return: hex or Hex
 */
int is_hex(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
/**
 * _base - length for an octal number
 * @num: number
 * @base: Base
 * Return: Integer
 */
unsigned int _base(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
/**
 * write_base - chars to be printed
 * @str: String
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
