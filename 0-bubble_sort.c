#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using bubble sort
 * @array: array of integers to sort in ascending order
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped++;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			return;
	}
}
/**
 * swap - swaps the values of two integer pointers
 * @p1: first pointer
 * @p2: second pointer
 */
void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
