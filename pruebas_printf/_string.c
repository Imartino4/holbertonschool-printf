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
	else
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		i = 6;
	}
	return (i); /*the quantity of iteration is equal to th number of characters*/
}
