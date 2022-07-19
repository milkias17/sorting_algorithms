#include "sort.h"


/**
	* swap - swaps two points in an array
	* @array: array to perform operations on
	* @index1: first index to swap
	* @index2: second index to swap
	* Description: swaps two points in an array
	* Return: void
*/
void swap(int *array, int index1, int index2)
{
	int tmp = array[index2];

	array[index2] = array[index1];
	array[index1] = tmp;
}

/**
	* main_quick_sort - sorts an array of integers
	* @array: array of integers
	* @low: lowest index
	* @high: high index
	* @size: size of array
	* Description: sorts an array of integers
	* Return: void
*/
void main_quick_sort(int *array, int low, int high, size_t size)
{
	int pivot = high;
	int i = low;
	int j = high - 1;

	if (low >= high)
		return;

	while (i <= j)
	{
		while (array[i] < array[pivot])
			i++;
		while (array[j] > array[pivot])
			j--;
		if (i > j)
			break;
		swap(array, i, j);
		print_array(array, size);
	}
	swap(array, i, pivot);
	print_array(array, size);
	pivot = i;

	main_quick_sort(array, low, pivot - 1, size);
	main_quick_sort(array, pivot + 1, high, size);
}

/**
	* quick_sort - sorts an array of integers using quick sort
	* @array: array of integers to sort
	* @size: size of array
	* Description: sorts an array of integers using quick sort
	* Return: void
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	main_quick_sort(array, 0, size - 1, size);
}
