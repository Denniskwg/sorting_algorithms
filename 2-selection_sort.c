#include "sort.h"
/**
 * selection_sort - sorts an array with selection sort algirithm
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
				jmin = j;
		}
		if (jmin != i)
		{
			j = array[jmin];
			array[jmin] = array[i];
			array[i] = j;
			print_array(array, size);
		}
	}
}
