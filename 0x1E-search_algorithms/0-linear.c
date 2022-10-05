#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *		using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located.
 *	-1 if array is NULL or value isn't present in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array || size == 0)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array [%lu] = [%d]\n", idx, idx[array]);
		if (idx[array] == value)
			return (idx);
	}
	return (-1);
}
