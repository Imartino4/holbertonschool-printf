#include "main.h"
/**
 * _string - print a string given as argument of _printf function
 * @ptr: pointer to argument to be printed
 *
 * Return: number of characters printed.
 */
int _string(va_list ptr)
{
	int i = 0;
	char *value;

	value = va_arg(ptr, char*);
	if (value)
	{
		for (i = 0; value[i] != 0; i++)
			_putchar(value[i]);
	}
	return (i);
}
