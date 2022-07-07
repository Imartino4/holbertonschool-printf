#include "main.h"
#include <stdio.h>
/**
 * _printf - prints arguments given as string char and %
 * @format: pointer to arguments strings
 *
 * Return: the number of character printed as an integer.
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	unsigned int i = 0, c_len = 0;

	if (format)
	{
		va_start(ptr, NULL);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '\0')
				       return (-1);	
				i++;
				if (format[i] == '%')
				{
					_putchar('%');
					c_len++;
				}
				c_len = c_len + func_aux(format[i], ptr);
			}
			else
			{
				_putchar(format[i]);
				c_len++;
			}
		}
		return (c_len);
	}
	return (-1);
}
