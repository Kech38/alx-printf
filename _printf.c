#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * typeIdentifiers - prints special characters
 * @type: the character after %
 * @arg: argument for the type identifier
 * Return: the number of characters printed
 * (excluding the null byte at the end)
 */

int typeIdentifiers(char type, va_list arg)
{
	int functsIndex;

	printStruct typefuncts[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	for (functsIndex = 0; typefuncts[functsIndex].type != NULL; functsIndex++)
	{
		if (functs[functsIndex].type[0] == type)
			return (functs[functsIndex].toprint(arg));
	}
	return (0);
}

/**
 * _printf - our printf from scratch
 * Description: print result following format
 * write output to stdout and the standard output stream
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed ignoring the NULL
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int idenPrinted = 0, charcount = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charcount++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charcount++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		idenPrinted = typeIdentifiers(format[i + 1], arg);
		if (idenPrinted == -1 || idenPrinted != 0)
			i++;
		if (idenPrinted > 0)
			charcount += idenPrinted;

		if (idenPrinted == 0)
		{
			_putchar('%');
			charcount++;
		}
	}
	va_end(arg);
	return (charcount);
}
