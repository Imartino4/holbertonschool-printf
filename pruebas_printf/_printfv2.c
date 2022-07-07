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
	int i = 0, c_len = 0;

	if (format == NULL)
		return (-1);
	else
	{
		va_start(ptr, NULL);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				c_len++;
			}
