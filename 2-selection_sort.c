#include "sort.h"

/**
 * selection_sort - function sorts array of integers in ascending order
 *
 * @array: array of int
 * @size: number of elmnts
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	/*outer loop*/
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		/*inner loop searching for index min*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;

			print_array(array, size);
		}
	}
}
