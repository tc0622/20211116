/*
 * Program: 20211005
 * Author: Tony Comeau
 * Date: 10/5/21
 * Revision 11/26/21
 * 
 * Purpose: Introduce the idea of pointers in language
 */

#include <stdio.h>

int swap(int *la, int *ra) //Left argument, right argument
{
	int tmp = *la; //store value pointed to by left argument
	*la = *ra; //move value stored in ra to la
	*ra = tmp; //move stored value of la into ra
	return(0);
} //swap

int main()
{
	int i = 6;
	int j = 9;
	printf("i is: %2d, j is %2d\n", i, j);
   	swap(&i,&j); 
	printf("i is: %2d, j is %2d\n", i, j);
	return(0);
} //main
