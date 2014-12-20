#include <stdio.h>
#include <stdlib.h>
#include "linked-list-int.h"

// Tworzy listę dowiązaniową
// -------------------------
linked_list_int_t * linked_list_int_create()
{
    linked_list_int_t *list = malloc(sizeof(struct linked_list_int_head));
    
    if (list != NULL)
    {
        list -> count = 0;
        
        list -> node_first = NULL;
        list -> node_last  = NULL;
    }
    
    return list;
}

// Dodaje element na początek listy
// --------------------------------
int32_t linked_list_int_add_first(linked_list_int_t *list, int64_t value)
{
    linked_list_int_node_t *new_node = malloc(sizeof(linked_list_int_node_t));
    int32_t result;
    
    if (new_node != NULL)
    {
        new_node -> value = value;
        
        if (list -> node_first == NULL)
        {
            new_node -> next = NULL;
            
            list -> node_first = new_node;
            list -> node_last  = new_node;
        }
        else
        {
            new_node -> next = list -> node_first;
            list -> node_first = new_node;
        }
        
        list -> count += 1;
        result = 0;
    }
    else
    {
        result = -1;
    }
    
    return result;
}

// Dodaje element na koniec listy
// --------------------------------
int32_t linked_list_int_add_last(linked_list_int_t *list, int64_t value)
{
    linked_list_int_node_t *new_node = malloc(sizeof(linked_list_int_node_t));
    int32_t result;
    
    if (new_node != NULL)
    {
        new_node -> value = value;
        new_node -> next  = NULL;
        
        if (list -> node_first == NULL)
        {
            list -> node_first = new_node;
            list -> node_last  = new_node;
        }
        else
        {
            list -> node_last -> next = new_node;
            list -> node_last = new_node;
        }
        
        list -> count += 1;
        result = 0;
    }
    else
    {
        result = -1;
    }
    
    return result;
}

// Usuwa wszystkie elementy listy
// ------------------------------
void linked_list_int_clear(linked_list_int_t *list)
{
    linked_list_int_node_t *list_node = list -> node_first;
    linked_list_int_node_t *to_remove;
    
    while (list_node != NULL)
    {
        to_remove = list_node;
        list_node = list_node -> next;
        free(to_remove);
    }
    
    list -> count = 0;
    
    list -> node_first = NULL;
    list -> node_last  = NULL;
}

// Wyświetla zawartość listy
// -------------------------
void linked_list_int_print(linked_list_int_t *list)
{
    linked_list_int_node_t *list_node = list -> node_first;
    
    printf("L");
    
    while (list_node != NULL)
    {
        printf("-|");
        printf("%ld", list_node -> value);
        printf("|");
        
        list_node = list_node -> next;
    }
}
