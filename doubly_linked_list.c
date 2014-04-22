/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */
 
#include <stdlib.h>

#include "doubly_linked_list.h"

void startList(Doubly_Linked_List* list) {
	list = (Doubly_Linked_List *) malloc(sizeof(Doubly_Linked_List));
	list->first = NULL;
	list->last = NULL;
}

void endList(Doubly_Linked_List* list) {
	Node *node = list->first;
	while ((node = node->next) != NULL) {
		free(node->prev);
	}
	free(node);
	free(list);
}

void insertAtBeginning(Doubly_Linked_List* list, elem_t elem) {
	Node *newNode = createNode(elem);
	newNode->next = list->first;
	list->first->prev = newNode;
	list->first = newNode;
}

void insertAtPrevious(Doubly_Linked_List* list, Node newNode, elem_t elem) {	}

void insertAtNext(Doubly_Linked_List* list, Node newNode, elem_t elem) {	}

void insertAtLast(Doubly_Linked_List* list, elem_t elem) {
	Node *newNode = createNode(elem);
	if (list->last != NULL) {
		newNode->prev = list->last;
		list->last->next = newNode;
		list->last = newNode;
	} else {
		insertAtBeginning(list, elem);
	}
}

int deleteAtBeginning(Doubly_Linked_List* list) {
	if (list == NULL)
		return 0;
	
	list->first = list->first->next;
	free(list->first->prev);
	return 1;
}

int deleteAtPrevious(Doubly_Linked_List* list, Node node) {
	return 0;
}

int deleteAtNext(Doubly_Linked_List* list, Node node) {
	return 0;
}

int deleteAtLast(Doubly_Linked_List* list) {
	if (list == NULL)
		return 0;
	
	list->last = list->last->prev;
	free(list->last->next);
	return 1;
}

Node* createNode(int elem) {
	Node* newNode = (Node *) malloc(sizeof(Node));
	
	newNode->info = elem;
	
	return newNode;
}

int isEmpty(Doubly_Linked_List* list) {
	if (list->first == NULL && list->last == NULL)
		return 1;
	return 0;
}

void print(Doubly_Linked_List list) {
	Node *node = list.first;
	while (node != NULL) {
		printf("%d", node->info);
		node = node->next;
	}
}
