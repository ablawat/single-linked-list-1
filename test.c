#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list-int.h"

void list_create_test()
{
    linked_list_int_t *list = linked_list_int_create();
    
    assert(list -> count == 0);
    
    assert(list -> node_first == NULL);
    assert(list -> node_last  == NULL);
}

void list_add_first_test()
{
    linked_list_int_t *list;
    
    int64_t value1 = 1;
    int64_t value2 = 2;
    
    
    list = linked_list_int_create();
    
    linked_list_int_add_first(list, value1);
    
    assert(list -> node_first == list -> node_last);
    assert(list -> node_first != NULL);
    assert(list -> count == 1);
    
    assert(list -> node_first -> value == value1);
    assert(list -> node_first -> next  == NULL);
    
    linked_list_int_add_first(list, value2);
    
    assert(list -> node_first != NULL);
    assert(list -> node_last  != NULL);
    assert(list -> count == 2);
    
    assert(list -> node_first != list -> node_last);
    
    assert(list -> node_first -> value == value2);
    assert(list -> node_first -> next  == list -> node_last);
    assert(list -> node_last  -> value == value1);
    assert(list -> node_last  -> next  == NULL);
}

void list_add_last_test()
{
    linked_list_int_t *list;
    
    int64_t value1 = 1;
    int64_t value2 = 2;
    
    
    list = linked_list_int_create();
    
    linked_list_int_add_last(list, value1);
    
    assert(list -> node_first == list -> node_last);
    assert(list -> node_first != NULL);
    assert(list -> count == 1);
    
    assert(list -> node_first -> value == value1);
    assert(list -> node_first -> next  == NULL);
    
    linked_list_int_add_last(list, value2);
    
    assert(list -> node_first != NULL);
    assert(list -> node_last  != NULL);
    assert(list -> count == 2);
    
    assert(list -> node_first != list -> node_last);
    
    assert(list -> node_first -> value == value1);
    assert(list -> node_first -> next  == list -> node_last);
    assert(list -> node_last  -> value == value2);
    assert(list -> node_last  -> next  == NULL);
}

int main()
{
    list_create_test();
    list_add_first_test();
    list_add_last_test();
    
    return 0;
}
