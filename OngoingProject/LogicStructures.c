/*
 * Program: Exercise in Logic Structures
 * Author: Warren Sheaffer
 * Date: 09/21/21
 *  Revision 11/16/21
 * Purpose: This example is an exercise in implementing functions
 * and the logic structures
 */

#include <stdio.h>
#include "lstructures.h"

int main(void)
{

	while(1)
	{
		int n;
		int val;
		n = menu();
		if (n != 0)
		{
		  printf("Enter test value: ");
		  scanf("%d",&val);
		} // if
		switch(n)
		{

			case 1: iffunc(val);
				break; // iffunc();
			case 2: forfunc(val);
			        break;
			case 3: whilefunc(val);
			   break;
			case 4: dowhilefunc(val);
			   break;
			default: n=0;
				 break;
		} // switch
		if (n == 0) break;

	} // while

} // main
