/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>
#include <stdlib.h>

#include "doubly_linked_list.h"
#include "big_number.h"

int main() {
	Doubly_Linked_List 	num1 = NULL,
				num2 = NULL,
				result = NULL;
	int numSize = 0;

	startList(&num1);
	startList(&num2);
	startList(&result);
	
	scanf("%d", &numSize);
	readNumber(&num1, numSize);
	scanf("%d", &numSize);
	readNumber(&num2, numSize);
	
	if (isEmpty(&num1) == 1)
		if (isEmpty(&num2) == 1)
			exit(EXIT_SUCCESS);
	
	add(&result, num1, num2);
	print(result);
	sub(&result, num1, num2);
	print(result);
	mult(&result, num1, num2);
	print(result);
}
