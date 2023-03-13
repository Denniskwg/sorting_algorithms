#include "sort.h"
/**
 * quick_sort - sorts an array of integers using
 * quck sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}
/**
 * partition - partitions an array using lumuto scheme
 * @arr : array to sort
 * @low :lower bound of sub array
 * @high: higher ound of array
 * @size: size of the array
 * Return: index to start partition
 */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = low - 1;
	int j;
	int hold;

	for (j = low; j <= high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				hold = arr[i];
				arr[i] = arr[j];
				arr[j] = hold;
				print_array(arr, size);
			}
		}
	}
	return (i);
}
/**
 * quick_sort_helper - sorts an array using quicksort alorithm
 * @arr: array to sort
 * @low: lower limit
 * @high: upper limit
 * @size: size of the array
 */
void quick_sort_helper(int *arr, int low, int high, size_t size)
{
	int p1;

	if (low < high)
	{
		p1 = partition(arr, low, high, size);
		quick_sort_helper(arr, low, p1 - 1, size);
		quick_sort_helper(arr, p1 + 1, high, size);
	}
}
