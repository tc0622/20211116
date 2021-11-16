/*
 * Function: menu()
 * Author: warren sheaffer
 * Date: 9/20/21
 * Purpose: Display a menu to the user and return an integer selection
 */
#include <stdio.h>

int menu()
{
	int i;
	printf("\t\t\t\tStructure Selection Menu\n\n");
	printf("\t\t\t 1. If structure function\n");
	printf("\t\t\t 2. For structure function\n");
	printf("\t\t\t 3. While structure function\n");
	printf("\t\t\t 4. Do-While structure function\n");
	printf("\t\t\t 0. Enter 0 to end.\n");
	printf("\t\t\t\tEnter Selection: ");
	scanf("%d", &i);

	return i;
} // menu
