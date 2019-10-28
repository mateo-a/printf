#ifndef HOLB_H
#define HOLB_H
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * struct vaargs - struct to canalize buffer
 * @typef: Type of format
 * @f: pointer to function
 */
typedef struct vaargs
{
	char typef;
	int (*f)();
} vargs;
int _printf(const char *format, ...);
int _putchar(char c);
void copyto_buffer(char *dest, char letter, int *pos);
int (*looktype(char s))(va_list args, char *dest, int *pos);
int save_string(va_list args, char *dest, int *pos);
int save_char(va_list args, char *dest, int *pos);
int save_reverse(va_list args, char *dest, int *pos);
int save_decimal(va_list args, char *dest, int *pos);
int save_percent(va_list args, char *dest, int *pos);
void convert_numbers(char *dest, unsigned int number, int *pos);
#endif
