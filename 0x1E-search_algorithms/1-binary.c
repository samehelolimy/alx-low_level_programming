#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array using binary search
  * @array: pointer to first element
  * @size: number of elements
  * @value: value to search for.
  * Return: If the value is not present or the array is NULL, -1
  * Description: Prints the [sub]array being searched
  */
int binary_search(int *array, size_t size, int value)
{
	size_t x, right, left;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}
