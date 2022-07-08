#include "main.h"
/**
 * _pow_integers - return the value of c raised to the power of y
 * @x: int
 * @y: int
 *
 * Description -
 * Return: int
 */
int _pow_integers(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_integers(x, y - 1));
}
