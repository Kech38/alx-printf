#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);

/**
 * struct printStruct - structure definition of a printTypeStruct
 * @type: data type
 * @printer: function to print
 */
typedef struct printStruct
{
char *type;
int (*printer)(va_list);
} printStruct;

#endif
