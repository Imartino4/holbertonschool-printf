#include "main.h"
/**
 * _octal - convert and print an unsigned int in octal base
 * @ptr: pointer to argument
 * Return: number of character printed.
 */
int _octal(va_list ptr)
{
	int c = 0, str[11], i;
	unsigned int num = va_arg(ptr, unsigned int), n;
	
	if (num == 0)
	{
		_putchar('0');
		return(1);
	}
	n = num;
	while (n > 0)
	{
		c++;
		n = n / 8;
	}
	for (i = 0; i < c; i++)
	{
		str[i] = num % 8;
		num = num / 8;
	}
	for (i = c - 1; i >= 0; i--)
		_putchar(str[i] + '0');
	return (c);
}
