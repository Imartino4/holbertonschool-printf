#include "main.h"
/**
 * _ui - convert different specifiers
 * @ptr: pointer to argument
 * Return: quantity of character printed.
 */
int _ui(va_list ptr)
{
	int c = 0, i = 0;
	unsigned int num, n, str[10];

	num = va_arg(ptr, unsigned int);
	n = num;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	for (i = 0; i < c; i++)
	{
		str[c - i - 1] = (num % 10);
		num = num / 10;
	}
	for (i = 0; i < c; i++)
		_putchar(str[i] + '0');
	return(c);
}
