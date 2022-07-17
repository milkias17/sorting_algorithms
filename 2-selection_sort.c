#include "sort.h"

/**
	* selection_sort - sorts an array of integers using selection sort.
	* @array: array to sort
	* @size: size of array
	* Description: sorts an array of integers using selection sort.
	* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t minVal;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		minVal = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minVal])
				minVal = j;
		}
		if (minVal != i)
		{
			tmp = array[minVal];
			array[minVal] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}

}
