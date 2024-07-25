/*
 ============================================================================
 Name        : Unit2_hw3_ex5.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, ch = 0, num, arr[20], elem;
	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	fflush(stdin);
	printf("Enter the element to be searched : ");
	fflush(stdout);
	scanf("%d", &elem);
	fflush(stdin);
	for (i = 0; i < num; i++) {
		if (elem == arr[i])
			printf("Number is found at the location : %d", (ch = 1, i + 1));
	}
	if (ch == 0)
		printf("Number is not found ! ");
	return 0;
}
