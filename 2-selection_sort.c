#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{

    size_t i, index;
    int minIndex, swap, swapsOccurred = 0;

    if (array == NULL)
            return;

    for (i = 0; i < size; i++)
    {
        minIndex = i;
        swapsOccurred = 0;

        for (index = i + 1; index < size; index++)
        {
            if (array[minIndex] > array[index])
                {
                    minIndex = index;
                    swapsOccurred++;
                }
        }

        swap = array[i];
        array[i] = array[minIndex];
        array[minIndex] = swap;

        if (swapsOccurred > 0)
            print_array(array, size);
    }

}
