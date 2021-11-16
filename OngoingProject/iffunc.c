/*
 * Program: implementation of a C if structure
 * Author: Warren Sheaffer
 * Date: 9/28/2021
 * Purpose: To illustrate the implementation of an if-else structure
 */

#include <stdio.h>

int iffunc(int j)
{
	// implement a double-if structure
	if (j>5) printf("Value of j is greater than 5\n");
	else printf("Value of j is less that 5\n");
	return(0);
}
