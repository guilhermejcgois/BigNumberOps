/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
 * ======================================================================== */
 
#ifndef __DOUBLY_LINKED_LIST_H

	#define __DOUBLY_LINKED_LIST_H

	typedef int elem_t;

	typedef struct node {
		struct node*	prev;
		elem_t		info;
		struct node*	next;
	} Node;

	typedef Node* Doubly_Linked_List;

	typedef struct head {
		Doubly_Linked_List	first;
		Doubly_Linked_List	last;
	} Head;

	void startList(Doubly_Linked_List*);
	void endList(Doubly_Linked_List*);

	void insertAtBeginning(Doubly_Linked_List*, elem_t);
	void insert(Doubly_Linked_List*, elem_t);
	void insertAtLast(Doubly_Linked_List*, elem_t);

	int deleteAtBeginning(Doubly_Linked_List*, elem_t*);
	int delete(Doubly_Linked_List*, elem_t);
	int deleteAtLast(Doubly_Linked_List*, elem_t*);
	
	Node* createNode(int);
	Node* getLastNode(Doubly_Linked_List*);
	int getLength(Doubly_Linked_List*);
	int isEmpty(Doubly_Linked_List*);
	int isOrdered(Doubly_Linked_List*);
	void invert(Doubly_Linked_List*);
	void print(Doubly_Linked_List*);
	void printWithoutSpace(Doubly_Linked_List*);

#endif
