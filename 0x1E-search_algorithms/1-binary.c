#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located.
 *	-1 if array is NULL or value is not present in array
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (bin_search(array, value, 0, size - 1));
}

/**
 * bin_search - Searches for a value in a sorted array of integers recursively
 *
 * @array: Array to search
 * @value: Search element
 * @left: Lower bound
 * @right: Upper bound
 *
 * Return: Search element index or -1 if not present
 */

int bin_search(int *array, int value, size_t left, size_t right)
{
	if (right >= left)
	{
		size_t idx;
		size_t mid = (left + right) / 2;

		printf("Searching in array: %d", left[array]);
		for (idx = left + 1; idx <= right; idx++)
			printf(", %d", idx[array]);
		printf("\n");

		if (mid[array] == value)
			return (mid);
		else if (mid[array] < value)
			return (bin_search(array, value, mid + 1, right));
		else
			return (bin_search(array, value, left, mid - 1));
	}
	return (-1);
}
