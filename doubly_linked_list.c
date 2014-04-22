/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */
 
#include <stdlib.h>

#include "doubly_linked_list.h"

void insertAtBeginning(Doubly_Linked_List* list, elem_t elem) {
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->info = elem;
	newNode->next = list->first;
	list->first->prev = newNode;
	list->first = newNode;
}

void insertAtPrevious(Doubly_Linked_List* list, Node newNode, elem_t elem) {	}

void insertAtNext(Doubly_Linked_List* list, Node newNode, elem_t elem) {	}

void insertAtLast(Doubly_Linked_List* list, elem_t elem) {
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->info = elem;
	newNode->prev = list->last;
	list->last->next = newNode;
	list->last = newNode;
}

int deleteAtBeginning(Doubly_Linked_List* list) {
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
	list->last = list->last->prev;
	free(list->last->next);
	return 1;
}
