#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Outputs a formatted string
 * @format: Character string to print - may contain directives
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ret;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	return (ret);
}
