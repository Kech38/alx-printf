#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int _print(const char *format, va_list args);

/**
 * struct printStruct - structure definition of a printTypeStruct
 * @type: data type
 * @toprint: function to print
 */
typedef struct printStruct
{
char *type;
int (*toprint)(va_list);
} printStruct;

#endif
