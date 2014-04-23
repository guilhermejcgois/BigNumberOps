/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L Lara
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */
 
#include <stdlib.h>
#include <stdio.h>

#include "doubly_linked_list.h"

void startList(Doubly_Linked_List* list) {
	*list = NULL;
}

void endList(Doubly_Linked_List* list) {
	/*Node *node = list->first;
	while ((node = node->next) != NULL) {
		free(node->prev);
	}
	free(node);
	free(list);*/
}

void insertAtBeginning(Doubly_Linked_List* list, elem_t elem) {
	Node *newNode;
	newNode = createNode(elem);
	newNode->next = *list;
	if (!isEmpty(list))
		(*list)->prev = newNode;
	*list = newNode;
}

void insertAtPrevious(Doubly_Linked_List* list, Node newNode, elem_t elem) {	}

void insertAtNext(Doubly_Linked_List* list, Node newNode, elem_t elem) {	}

void insertAtLast(Doubly_Linked_List* list, elem_t elem) {
	Node *newNode, *aux;
	newNode = createNode(elem);
	if (isEmpty(list)) {
		insertAtBeginning(list, elem);		
	} else {
		aux = *list;
		while (aux->next != NULL)
			aux = aux->next;
		newNode->next = aux->next;
		aux->next = newNode;
		newNode->prev = aux;
	}
}

int deleteAtBeginning(Doubly_Linked_List* list) {
	return 0;
}

int deleteAtPrevious(Doubly_Linked_List* list, Node node) {
	return 0;
}

int deleteAtNext(Doubly_Linked_List* list, Node node) {
	return 0;
}

int deleteAtLast(Doubly_Linked_List* list) {
	return 0;
}

Node* createNode(int elem) {
	Node* newNode;
	newNode = malloc(sizeof(Node));
	
	newNode->info = elem;
	
	return newNode;
}

int isEmpty(Doubly_Linked_List* list) {
	if (*list == NULL)
		return 1;
	return 0;
}

void print(Doubly_Linked_List* list) {
	Node *node = *list;
	while (node != NULL) {
		printf("%d ", node->info);
		node = node->next;
	}
}
