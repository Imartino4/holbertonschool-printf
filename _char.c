#include "main.h"
/**
 * _char - print a char given as argument in _printf function
 * @ptr: pointer to argument to be printed
 *
 * Return: 1 because it is only one character.
 */
int _char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return (1);
}
