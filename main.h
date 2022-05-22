#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);

#endif
