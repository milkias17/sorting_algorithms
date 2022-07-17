#include "sort.h"

/**
	* bubble_sort - sorts an array of integers using bubble sort.
	* @array: array to sort
	* @size: size of array to sort
	* Description: sorts an array of integers using bubble sort.
	* Return: void
*/
void bubble_sort(int *array, size_t size)
{

	size_t i;
	int swapped;

	if (size < 2)
		return;

	if (array == NULL)
		return;

	while (1)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i + 1];

				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}

}
