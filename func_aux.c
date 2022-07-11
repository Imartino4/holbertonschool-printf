#include "main.h"
#include <stddef.h>
/**
 *func_aux - evalaute the next character of a %
 *@s: char to be avaluated
 *@ptr: pointer to argument
 *
 *Return: quantity of characters
 */
int func_aux(char s, va_list ptr)
{
	pf_aux pf_aux[] = {
		{'c', _char}, {'s', _string}, {'i', _int},
		{'d', _int}, {'b', _bin}, {'u', _ui}, {'o', _octal},
	       	{'x', _hexa}, {'X', _hexa_upper}, {'\0', NULL}
	};
	int j = 0, k = 0;

	for (j = 0; pf_aux[j].type != '\0'; j++)
	{
		if (pf_aux[j].type == s)
		{
			k = pf_aux[j].f(ptr);
			break;
		}
	}
	if (pf_aux[j].type == '\0' && s != '%' && s != ' ')
	{
		if (s)
		{
			_putchar('%');
			_putchar(s);
			k = 2;
		}
		else
		{
			return (-1);
		}
	}
	return (k);
}
