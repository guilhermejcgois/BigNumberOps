/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois & Felipe L. Lara
 * Licensed under MIT (https://github.com/guilhermegois/Big_Number_Ops/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>
#include <stdlib.h>

#include "doubly_linked_list.h"
#include "big_number.h"

int main() {
	Doubly_Linked_List 	num1,
						num2,
						result;
	int numSize = 0; Node *node;

	startList(&num1);
	startList(&num2);
	startList(&result);

/*
	node = createNode(1);
	if (isEmpty(&(num1.list)))
		insertAtBeginning(&(num1.list), 4);
	insertAtBeginning(&(num1.list), 5);
	print(&(num1.list));
*/
	
	scanf("%d", &numSize);
	readNumber(&num1, numSize);
	scanf("%d", &numSize);
	readNumber(&num2, numSize);

	add(&result, num1, num2);
	printWithoutSpace(&result);
	startList(&result);
	sub(&result, num1, num2);
	printWithoutSpace(&result);
	startList(&result);
	mult(&result, num1, num2);
	printWithoutSpace(&result);
}
