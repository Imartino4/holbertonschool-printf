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
	/*Define struct with type and corresponding function*/
	pf_aux pf_aux[] = {
		{"c", _char}, {"s", _string}, {NULL, NULL}
	};
	va_list ptr;
	unsigned int i = 0, c_len = 0, j = 0;

	if (format)
	{
		va_start(ptr, NULL);
		for (i = 0; format[i]; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				c_len++;
			}
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '%')
				{
					_putchar('%');
					c_len++;
				}
				for (j=0; pf_aux[j].type != NULL; j++)
				{
					if (*pf_aux[j].type == format[i])
					{
						c_len = c_len + pf_aux[j].f(ptr);
						break;
					}
				}
				if (pf_aux[j].type == NULL && format[i] != '%' && format[i] != ' ')
				{
					if (format[i] != '\0')
					{
						_putchar(format[i - 1]);
						_putchar(format[i]);
						c_len = c_len + 2;
					}
					else
					{
						return (-1);
					}
				}
			}
		}
		return (c_len);
	}
	return (-1);
}
