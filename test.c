#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list-int.h"

void list_create_test()
{
    linked_list_uint_t **list = linked_list_uint_create();
    
    assert(list[0] == NULL);
    assert(list[1] == NULL);
}

void list_add_test()
{
    linked_list_uint_t **list;
    
    unsigned int value1 = 1;
    unsigned int value2 = 2;
    
    
    list = linked_list_uint_create();
    
    linked_list_uint_add_first(list, value1);
    
    assert(list[0] == list[1]);
    assert(list[0] != NULL);
    assert(list[0] -> value == value1);
    assert(list[0] -> next  == NULL);
    
    linked_list_uint_add_first(list, value2);
    
    assert(list[0] != NULL);
    assert(list[1] != NULL);
    assert(list[0] != list[1]);
    
    assert(list[0] -> value == value2);
    assert(list[0] -> next  == list[1]);
    assert(list[1] -> value == value1);
    assert(list[1] -> next  == NULL);
    
    
    list = linked_list_uint_create();
    
    linked_list_uint_add_last(list, value1);
    
    assert(list[0] == list[1]);
    assert(list[0] != NULL);
    assert(list[0] -> value == value1);
    assert(list[0] -> next  == NULL);
    
    linked_list_uint_add_last(list, value2);
    
    assert(list[0] != NULL);
    assert(list[1] != NULL);
    assert(list[0] != list[1]);
    
    assert(list[0] -> value == value1);
    assert(list[0] -> next  == list[1]);
    assert(list[1] -> value == value2);
    assert(list[1] -> next  == NULL);
}

int main()
{
    list_create_test();
    list_add_test();
    
    return 0;
}
