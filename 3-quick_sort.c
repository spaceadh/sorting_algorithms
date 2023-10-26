#include "sort.h"

/**
 *q_s - This function executes the quicksort algorithm
 *@array: array
 *@first: first element
 *@last: last element
 *@size: size of array
 */

void q_s(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;

}

/**
 *quick_sort - This function sorts a lsit using quicksort algorithm
 *@array: array
 *@size: array size
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	q_s(array, 0, size - 1, size);
}
