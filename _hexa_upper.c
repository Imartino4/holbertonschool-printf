#include "main.h"
/**
 * _hexa_upper - convert an unsigned int to upper hexadecimal base and print it
 * @ptr: pointer to argument
 * Return: number of printed character
 */
int _hexa_upper(va_list ptr)
{
	unsigned int n, num = va_arg(ptr, unsigned int);
	int i, c = 0, str[11];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	n = num;
	while (n > 0)
	{
		c++;
		n = n / 16;
	}
	for (i = 0; i < c; i++)
	{
		str[i] = num % 16;
		num = num / 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (str[i] < 10)
			_putchar(str[i] + 48);
		else
			_putchar(str[i] + 55);
	}
	return (c);
}
