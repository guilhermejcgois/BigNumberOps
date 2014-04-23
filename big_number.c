/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L. Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>

#include "big_number.h"
#include "doubly_linked_list.h"

int addc(Doubly_Linked_List* dest, Node source1, Node source2, int carryIn) {
    int carryOut = 0, aux = 0;
    
    aux = source1.info + source2.info;
    
    insertAtBeginning(dest, aux);
    
    if (source1.prev == NULL && source2.prev == NULL)
        return carryOut;
    return addc(dest, *(source1.prev), *(source2.prev), carryOut);
}

void add(Number *dest, Number src1, Number src2) {
	int carry = 0;
	
	if ((carry = addc(dest->list, *(src1.last), *(src2.last), 0)) != 0)
	    insertAtBeginning(dest->list, carry);
	
	/*int a,c=0,cont=1;
	
	while((*source1).next != NULL || (*source2).next != NULL)
	{
		
		if((*source1).next != NULL && (*source2).next != NULL) {
			a = (*source1).next->info + (*source2).next->info + c;
			if(a > 9)
			{ // verificar se a > 9 e pegar o carry (a / 10)
				c = 1;
				a = a % 10;
				
				insertAtBeginning(dest,a);
			}
			else
			{
				c=0;
				insertAtBeginning(dest,a);
				
			}
			
			
			(*source1).next = (*source1).next->prev;
			(*source2).next = (*source2).next->prev;
			
			

		}
		/else 
			if(source1.last != NULL && source2.last == NULL) {
			a = source1.last->info + c;
			insertAtLast(dest,a);
			source1.last = source1.last->prev;
			printf("E2\n");
			
		}
		else 
			if(source1.last == NULL && source2.last != NULL) {

			a = source2.last->info + c;
			insertAtLast(dest,a);
			source2.last = source2.last->prev;
			printf("E3\n");
		}/
	}*/
}
void mult(Number *dest, Number src1, Number src2) {
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

void sub(Number *dest, Number src1, Number src2) {
    Node *node;
    
    for (node = src2.first; node != NULL; node = node->next)
        node->info *= -1;
    
    add(dest, src1, src2);
}
