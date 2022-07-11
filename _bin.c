#include "main.h"
#include <stdarg.h>
/**
 * _bin - func aux to print a binary in printf
 * @ptr: pointer to an unsigned int to be converted in binary
 *
 *Return: quantity of characters as int.
 */
int _bin(va_list ptr)
{
	int c = 0;
	unsigned int num, i = 1, str[1024];

	num = va_arg(ptr, unsigned int);
	if (num == 0)
	{
		_putchar(num + '0');
		return (1);
	}
	while (num >= 1)
	{
		str[i] = (num % 2);
		c++;
		i++;
		num = num / 2;
	}
	for (i = c; i > 0; i--)
		_putchar(str[i] + '0');
	return (c);
}
