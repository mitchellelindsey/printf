#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: function parmeter
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list list_of_args;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				char_print++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_of_args, int);

				write(1, &c, 1);
				char_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				char_print += str_len;
			}
		}
		else
		{
			write(1, format, 1);
			char_print++;
		}
		format++;
	}
	va_end(list_of_args);
	return (char_print);
}
