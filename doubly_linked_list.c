/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
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

void insert(Doubly_Linked_List* list, elem_t elem) {
    Node *newNode, *aux;
	newNode = createNode(elem);
	if (isEmpty(list)) {
		insertAtBeginning(list, elem);		
	} else {
		aux = *list;
		while (aux->next-data <= newNode->data)
			aux = aux->next;
		newNode->next = aux->next;
		aux->next = newNode;
		newNode->prev = aux;
	}
}

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

int deleteAtBeginning(Doubly_Linked_List* list, elem_t *elem) {
	if (isEmpty(list))
	    return 0;
	
	
}

int delete(Doubly_Linked_List* list, elem_t elem) {
	Node *node;
	
	for (node = *list; node != NULL; node = node->next) {
	    if (node->data == elem) {
	        node->prev->next = node->next;
	        node->next->prev = node->prev;
	        free(node);
	        return 1;
	    }
	}
	
	return 0;
}

int deleteAtLast(Doubly_Linked_List* list, elem_t *elem) {
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

int isOrdered(Doubly_Linked_List* list) {
    Node* aux;
    aux = *list;
	while (aux = aux->next != NULL)
		if (aux->data > aux->next->data)
		    return 0;
	return 1;
}

void invert(Doubly_Linked_List* list) {
    
}

void print(Doubly_Linked_List* list) {
	Node *node;
	node = *list;
	while (node != NULL) {
		printf("%d ", node->info);
		node = node->next;
	}
	puts("\n");
}

void print(Doubly_Linked_List* list) {
	Node *node;
	node = *list;
	while (node != NULL) {
		printf("%d", node->info);
		node = node->next;
	}
	puts("\n");
}
