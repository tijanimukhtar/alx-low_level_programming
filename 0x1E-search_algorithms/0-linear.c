#include "search_algos.h"

/**
  * linear_search - linear search
  * @array: this is the pointer to first element in search array
  * @size: this is the size of array
  * @value: the value to find
  *
  * Return: index where found or -1
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
