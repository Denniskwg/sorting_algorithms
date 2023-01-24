#include "sort.h"
/**
 * quick_sort - helper function
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
/**
 * partition - partitions an array for qsort
 * @arr : array to sort
 * @low :lower bound of sub array
 * @size: size of the array
 * @high: higher ound of array
 * Return: index to start partition
 */

int partition(int *arr, int low, int high, size_t size)
{
	int pivot, i, j, temp;

	pivot = arr[high];
	i = low - 1;
	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			print_array(arr, size);
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	return (i + 1);
}
/**
 * lomuto_qsort - uses the lumoto partition scheme
 * @low: lower bound
 * @high: higher bound
 * @array: array to sort
 * @size: size of the array
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}
