/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L. Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>

#include "big_number.h"
#include "doubly_linked_list.h"

void add(Doubly_Linked_List *dest, Doubly_Linked_List src1, Doubly_Linked_List src2) {
	int carry = 0;
	
	if ((carry = addc(dest, getLastNode(&src1), getLastNode(&src2), 0)) > 0)
	    insertAtBeginning(dest, carry);
}

int addc(Doubly_Linked_List* dest, Node *source1, Node *source2, int carryIn) {
    int carryOut = 0, aux = 0;
    
    if (source1 != NULL) {
        aux = source1->info;
        if (source2 != NULL)
	        aux += source2->info;
    } else {
        aux = source2->info;
    }
    aux += carryIn;

    if (aux > 9) {
        carryOut = 1;
        aux %= 10;
    }
    
    insertAtBeginning(dest, aux);
    
    if ((source1 == NULL || source1->prev == NULL) && (source2 == NULL || source2->prev == NULL))
        return carryOut;
    return addc(dest, source1->prev, source2->prev, carryOut);
}

void mult(Doubly_Linked_List *dest, Doubly_Linked_List src1, Doubly_Linked_List src2) {
}

int multc(Doubly_Linked_List* dest, Node *source1, Node *source2, int carryIn) {
    int carryOut = 0, aux = 0;
    
    if (source1 != NULL) {
        aux = source1->info;
        if (source2 != NULL) {
            if (aux <= source2->info) {
                aux += 10;
                carryOut = -1;
            }
	        aux -= source2->info;
        }
    } else {
        aux -= source2->info;
    }
    aux += carryIn;
    
    insertAtBeginning(dest, aux);
    
    if ((source1 == NULL || source1->prev == NULL) && (source2 == NULL || source2->prev == NULL))
        return carryOut;
    return subc(dest, source1->prev, source2->prev, carryOut);
}

void readNumber(Doubly_Linked_List *number, int size) {
	char c;
	while (size > 0 ) {
		c = getchar();
		if (c >= '0' && c <= '9') {
			insertAtLast(number, c - '0');
			size--;
		}
	}
}

void sub(Doubly_Linked_List *dest, Doubly_Linked_List src1, Doubly_Linked_List src2) {
    int carry = 0;
    
    /*if (getLength(&src2) > getLength(&src1)) {
        if ((carry = subc(dest, getLastNode(&src2), getLastNode(&src1), 0)) > 0)
    	    insertAtBeginning(dest, carry);
        (*dest)->info *= -1;
    } else {*/
        if ((carry = subc(dest, getLastNode(&src1), getLastNode(&src2), 0)) < 0)
	        insertAtBeginning(dest, carry);
    //}
}

int subc(Doubly_Linked_List* dest, Node *source1, Node *source2, int carryIn) {
    int carryOut = 0, aux = 0;
    
    if (source1 != NULL) {
        aux = source1->info;
        if (source2 != NULL) {
            if (aux <= source2->info) {
                aux += 10;
                carryOut = -1;
            }
	        aux -= source2->info;
        }
    } else {
        aux -= source2->info;
    }
    aux += carryIn;
    
    insertAtBeginning(dest, aux);
    
    if ((source1 == NULL || source1->prev == NULL) && (source2 == NULL || source2->prev == NULL))
        return carryOut;
    return subc(dest, source1->prev, source2->prev, carryOut);
}
