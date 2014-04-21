/* ========================================================================
 * Copyright 2014 Guilherme J. C. Gois
 * Licensed under MIT (https://github.com/guilhermegois/gois_lib/master/LICENSE)
 * ======================================================================== */

#include <stdio.h>
#include <stdlib.h>

#include "doubly_linked_list.h"
#include "big_number.h"

int main() {
	int option;
	Doubly_Linked_List num1, num2 result;
	startList(num1);
	startList(num2);
	startList(result);
	
	while(1) {
		readNumber(num1);
		readNumber(num2);
		
		if (isEmpty(num1) == 1)
			if (isEmpty(num2) == 1)
				exit(EXIT_SUCCESS);
		
		add(&result, num1, num2);
		print(result);
		sub(&result, num1, num2);
		print(result);
		mult(&result, num1, num2);
		print(result);
	}
}
