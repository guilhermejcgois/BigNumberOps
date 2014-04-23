/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L. Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
 * ======================================================================== */

#include "doubly_linked_list.h"

#ifndef __BIG_NUMBER_H

	#define __BIG_NUMBER_H
	
typedef struct number {
    Doubly_Linked_List  *list;
    Node                *first;
    Node                *last;
} Number;

int addc(Doubly_Linked_List*, Node, Node, int);
void add(Number*, Number, Number);
void mult(Number*, Number, Number);
void readNumber(Doubly_Linked_List*, int);
void sub(Number*, Number, Number);

#endif
