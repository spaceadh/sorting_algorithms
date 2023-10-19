#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort i.e from Minimum to maximum value 
 * @array: The array to be sorted
 * @size: The number of elements(N) in the array
 */

void bubble_sort(int *array, size_t size)
{
    int swapped; // Variable to track whether any swaps were made in a pass
    size_t i, j; // Loop counters
    int temp;     // Temporary variable for swapping

    if (array == NULL || size < 2) // Check for invalid inputs
        return;

    // Outer loop for each pass through the array
    for (i = 0; i < size - 1; i++)
    {
        swapped = 0; // Initialize swapped to 0 for this pass
        // Inner loop for comparing and swapping elements
        
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j]; // Swap elements using a temporary variable
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1; // Set swapped to 1 to indicate a swap occurred
                print_array(array, size); // Print the array after each swap
            }
        }

        // If no swaps were made in a pass, the array is already sorted
        if (swapped == 0)
            break;
    }
}