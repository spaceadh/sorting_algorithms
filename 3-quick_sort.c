#include "sort.h"

/**
 *quick_sort - prepare quicksort algorithm
 *@array: array
 *@size: array size
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}

void q_s(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;

}
