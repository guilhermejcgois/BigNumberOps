/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L. Lara
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>

#include "big_number.h"
#include "doubly_linked_list.h"

void add(Doubly_Linked_List* dest, Doubly_Linked_List source1, Doubly_Linked_List source2) {
	int a,c=0,cont=1;
	
	
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
		/*else 
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
		}*/



		

	}





}
void mult(Doubly_Linked_List* dest, Doubly_Linked_List source1, Doubly_Linked_List source2) {
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

void sub(Doubly_Linked_List* dest, Doubly_Linked_List source1, Doubly_Linked_List source2) {
}
