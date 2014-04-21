/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>

#include "big_number.h"
#include "doubly_linked_list.h"

void add(Doubly_Linked_List* dest, Doubly_Linked_List source, Doubly_Linked_List source) {
}

void mult(Doubly_Linked_List* dest, Doubly_Linked_List source, Doubly_Linked_List source) {
}

void readNumber(Doubly_Linked_List *number) {
	char c;
	while (c = getchar() != '\n' && c != ' ') {
		if (c >= '0' && c <= '9') {
			insertAtLast(&number, c - '0');
		}			
	}
}

void sub(Doubly_Linked_List* dest, Doubly_Linked_List source, Doubly_Linked_List source) {
}
