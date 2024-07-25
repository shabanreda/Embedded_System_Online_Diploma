/*
 ============================================================================
 Name        : Unit2_hw3_ex4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, sel, i, loc, a[20];
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		scanf("%d", &a[i]);
	fflush(stdin);
	for (i = 0; i < num; i++)
		printf("%d ", a[i]);
	printf("\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d", &sel);
	fflush(stdin);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d", &loc);
	fflush(stdin);
	for (i = num; i >= loc - 1; i--)
		a[i] = a[i - 1];
	num++;
	a[loc - 1] = sel;
	for (i = 0; i < num; i++)
		printf("%d ", a[i]);


	return 0;
}
