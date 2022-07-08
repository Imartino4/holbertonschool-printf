#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdarg.h>
/**
 * _int - print an integer 
 * @ptr: pointer to argument to be printed
 *
 * Return: quantity of character
 */
int _int(va_list ptr)
{
	int i = 0, c = 0, n, n_dig = 0, div, num;
	unsigned int num2;

	num = va_arg(ptr, int);
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		c++;
	}
	n = num;
	while (n > 0)
	{
		n_dig++;
		n = n / 10;
	}
	n = n_dig;
	for (i= 0; i < n; i++, n_dig--)
	{
		div = _pow_integers(10, n_dig - 1);
		_putchar((num / div) % 10 + '0');
		c++;
	}
	return (c);
}
