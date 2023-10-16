#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: function parameter
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int j, count = 0;

	va_list args;

	va_start(args, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
		}
		if (format[j] == '%' && format[j + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			j++;
		}

		count += 1;
	}

	va_end(args);
	return (count);
}
