/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L. Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
 * ======================================================================== */

#include "doubly_linked_list.h"

#ifndef __BIG_NUMBER_H

	#define __BIG_NUMBER_H

int addc(Doubly_Linked_List*, Node*, Node*, int);
void add(Doubly_Linked_List*, Doubly_Linked_List, Doubly_Linked_List);
void mult(Doubly_Linked_List*, Doubly_Linked_List, Doubly_Linked_List);
void readNumber(Doubly_Linked_List*, int);
int subc(Doubly_Linked_List*, Node*, Node*, int);
void sub(Doubly_Linked_List*, Doubly_Linked_List, Doubly_Linked_List);

#endif
