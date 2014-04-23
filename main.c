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
	int numSize = 0;

	startList(&num1);
	startList(&num2);
	startList(&result);
	
	scanf("%d", &numSize);
	readNumber(&num1, numSize);
	scanf("%d", &numSize);
	readNumber(&num2, numSize);
	
	add(&result, num1, num2);
	print(&result);
	sub(&result, num1, num2);
	print(&result);
	mult(&result, num1, num2);
	print(&result);
}
