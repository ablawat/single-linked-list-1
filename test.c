#include <stdio.h>
#include <stdlib.h>
#include "linked-list-int.h"

int main()
{
    unsigned int value1 = 1;
    unsigned int value2 = 2;
    unsigned int value3 = 3;
    
    linked_list_uint_t **list = linked_list_uint_create();
    
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_first(list, value1);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_last(list, value2);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_last(list, value3);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_first(list, value3);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_last(list, value1);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_clear(list);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_last(list, value1);
    linked_list_uint_print(list);
    putchar(10);
    
    linked_list_uint_add_first(list, value3);
    linked_list_uint_print(list);
    putchar(10);
    
    return 0;
}
