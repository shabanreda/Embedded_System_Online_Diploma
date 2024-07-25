/*
 ============================================================================
 Name        : utrty.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2], b[2][2];
	printf("Enter the elements of 1st matrix\n"); /* prints !!!Hello World!!! */
	for (int i = 0; i < 2; i++) {
		for (int c = 0; c < 2; c++) {
			printf("Enter a%d%d :", i + 1, c + 1);
			fflush(stdout);
			scanf("%f", &a[i][c]);
			fflush(stdin);
		}
	}
	printf("\nEnter the elements of 2nd matrix\n"); /* prints !!!Hello World!!! */
	for (int i = 0; i < 2; i++) {
		for (int c = 0; c < 2; c++) {
			printf("Enter b%d%d :", i + 1, c + 1);
			fflush(stdout);
			scanf("%f", &b[i][c]);
			fflush(stdin);
		}
	}

	printf("\n\nSum of Matrixs \n"); /* prints !!!Hello World!!! */
	for (int i = 0; i < 2; i++) {
		for (int c = 0; c < 2; c++) {
			printf("%.1f \t", a[i][c] += b[i][c]);

		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
