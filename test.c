#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list-int.h"

void list_create_test()
{
    linked_list_int_t **list = linked_list_int_create();
    
    assert(list[0] == NULL);
    assert(list[1] == NULL);
}

void list_add_first_test()
{
    linked_list_int_t **list;
    
    int64_t value1 = 1;
    int64_t value2 = 2;
    
    
    list = linked_list_int_create();
    
    linked_list_int_add_first(list, value1);
    
    assert(list[0] == list[1]);
    assert(list[0] != NULL);
    assert(list[0] -> value == value1);
    assert(list[0] -> next  == NULL);
    
    linked_list_int_add_first(list, value2);
    
    assert(list[0] != NULL);
    assert(list[1] != NULL);
    assert(list[0] != list[1]);
    
    assert(list[0] -> value == value2);
    assert(list[0] -> next  == list[1]);
    assert(list[1] -> value == value1);
    assert(list[1] -> next  == NULL);
}

void list_add_last_test()
{
    linked_list_int_t **list;
    
    int64_t value1 = 1;
    int64_t value2 = 2;
    
    
    list = linked_list_int_create();
    
    linked_list_int_add_last(list, value1);
    
    assert(list[0] == list[1]);
    assert(list[0] != NULL);
    assert(list[0] -> value == value1);
    assert(list[0] -> next  == NULL);
    
    linked_list_int_add_last(list, value2);
    
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
    list_add_first_test();
    list_add_last_test();
    
    return 0;
}
