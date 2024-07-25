/*
 ============================================================================
 Name        : Unit2_hw3_ex3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;
	int arr[10][10], trans[10][10];
	printf("Enter rows and column of matrix \n");
	printf("rows : ");
	fflush(stdout);
	scanf("%d", &x);
	fflush(stdin);
	printf("clms : ");
	fflush(stdout);
	scanf("%d", &y);
	fflush(stdin);
	printf("Enter elements of matrix: \n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("Enter element a%d%d: ", i + 1, j + 1);
			fflush(stdout);
			scanf("%d", &arr[i][j]);
			fflush(stdin);
		}
	}
	printf("\nEntered matrix: \n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			printf("%d   ", arr[i][j]);
		printf("\n");
	}
	printf("\ntranspse of matrix: \n");
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++)
			printf("%d   ", arr[j][i]);
		printf("\n");
	}


	return EXIT_SUCCESS;
}
