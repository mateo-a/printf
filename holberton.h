#ifndef HOLB_H
#define HOLB_H
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
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
int _putchar(char c);
int (*looktype(char s))(va_list args, char *dest, int *pos);
int save_string(va_list args, char *dest, int *pos);
int save_char(va_list args, char *dest, int *pos);
#endif
