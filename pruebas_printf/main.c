#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("1Hola%c%", 'A');
	printf ("\n");
	printf("2Hola%c%", 'A');
	printf("\n");
	_printf("3Hola % ");
	printf("\n");
	printf("4Hola % ");
	printf("\n");
	printf("5%d, %d\n", len, len2);
	_printf("6Hola%s%j%%%", "Mundo");
	printf("7Hola%s%j%%%", "Mundo");
	_printf("8%j");
	printf("9%j");
	printf("\n");
	_printf("\n ");

	return (0);
}
