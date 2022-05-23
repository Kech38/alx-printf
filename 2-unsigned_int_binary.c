#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_unsignedintToBinary - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_unsignedintToBinary(va_list arg)
{
unsigned int i = va_arg(arg, unsigned int);
unsigned int print;

print_binary(i, &print);
print_binary(i, &print);

return (print);
}
