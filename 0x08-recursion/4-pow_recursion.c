#include "main.h"

/**
 * _pow_recursion - Returns x power y
 *
 * @x: number to be multiplied
 * @y: number of times to multiply x
 *
 * Return: Solution, -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
