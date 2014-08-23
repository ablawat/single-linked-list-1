#ifndef LINKED_LIST_INT_H
#define LINKED_LIST_INT_H

typedef struct linked_list_int
{
    int                      value;
    struct linked_list_int  *next;
}
linked_list_int_t;

linked_list_int_t ** linked_list_int_create();

int   linked_list_int_add_first  (linked_list_int_t **list, int value);
int   linked_list_int_add_last   (linked_list_int_t **list, int value);

void  linked_list_int_clear      (linked_list_int_t **list);
void  linked_list_int_print      (linked_list_int_t **list);

#endif
