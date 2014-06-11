#ifndef LINKED_LIST_INT
#define LINKED_LIST_INT

typedef struct linked_list_uint
{
    unsigned int                 value;
    struct linked_list_uint     *next;
}
linked_list_uint_t;

linked_list_uint_t ** linked_list_uint_create();

int   linked_list_uint_add_first     (linked_list_uint_t **list, unsigned int value);
int   linked_list_uint_add_last      (linked_list_uint_t **list, unsigned int value);

void  linked_list_uint_clear         (linked_list_uint_t **list);
void  linked_list_uint_print         (linked_list_uint_t **list);

#endif
