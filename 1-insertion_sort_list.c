#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        prev = current->prev;

        while (prev != NULL && prev->n > current->n)
        {
            temp = current->next;

            if (temp)
                temp->prev = prev;

            prev->next = temp;
            current->prev = prev->prev;
            current->next = prev;
            prev->prev = current;

            if (current->prev == NULL)
                *list = current;

            if (prev->next)
                prev->next->prev = prev;

            prev->next = current;

            print_list(*list);  

            prev = current->prev;
        }
        current = current->next;

    }
}
