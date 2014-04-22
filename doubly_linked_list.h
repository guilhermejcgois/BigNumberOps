/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */
 
#ifndef __DOUBLY_LINKED_LIST_H

	#define __DOUBLY_LINKED_LIST_H

	typedef int elem_t;

	typedef struct node {
		struct node*	prev;
		elem_t			info;
		struct node*	next;
	} Node;

	typedef struct list {
		struct node*	first;
		struct node*	last;
	} Doubly_Linked_List;

	void insertAtBeginning(Doubly_Linked_List*, elem_t);
	void insertAtPrevious(Doubly_Linked_List*, Node, elem_t);
	void insertAtNext(Doubly_Linked_List*, Node, elem_t);
	void insertAtLast(Doubly_Linked_List*, elem_t);

	int deleteAtBeginning(Doubly_Linked_List*);
	int deleteAtPrevious(Doubly_Linked_List*, Node);
	int deleteAtNext(Doubly_Linked_List*, Node);
	int deleteAtLast(Doubly_Linked_List*);

#endif
