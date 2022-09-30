#include "main.h"

/**
 * _pow_recursion - function that raises x to the power y
 * @x: the integer to be raised
 * @y: the power to which the integer is raised
 * Return: the value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
