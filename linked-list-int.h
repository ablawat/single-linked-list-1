#ifndef LINKED_LIST_INT

	typedef struct linkedListInt
	{
		Value			value;
	
		struct linkedListInt	*next;
	}
	LinkedListInt;

	LinkedListInt ** LinkedListIntCreate();
	int LinkedListIntAddFirst(LinkedListInt **list, Value *value);
	int LinkedListIntRemoveFirst(LinkedListInt **list);
		
	void LinkedListIntPrint(LinkedListInt **list);

	#define LINKED_LIST_INT

#endif
