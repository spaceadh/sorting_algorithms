CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89 -g

betty-check:
	betty sort.h 0-bubble_sort.c 1-insertion_sort_list.c 2-selection_sort.c 3-quick_sort.c

bubble_sort:
	gcc $(CFLAGS) 0-main.c 0-bubble_sort.c print_array.c print_list.c -o bubble ./bubble

insertion_sort:
	gcc $(CFLAGS) 1-main.c insertion_sort_list.c print_array.c print_list.c -o insertion ./insertion

select_sort:
	gcc $(CFLAGS) 2-main.c selection_sort.c print_array.c print_list.c -o select ./select

quick_sort:
	gcc $(CFLAGS) 3-main.c quick_sort.c print_array.c print_list.c -o quick ./quick
