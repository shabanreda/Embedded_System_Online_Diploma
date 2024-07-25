/*
 ============================================================================
 Name        : Unit2_hw3_ex2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float arr[20], sum = 0;
	int num;
	printf("Enter the number of data :");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdin);
	for (int i = 0; i < num; i++) {
		printf("Enter number: ");
		fflush(stdout);
		scanf("%f", &arr[i]);
		fflush(stdin);
		sum += arr[i];
	}
	printf("Average = %.2f", sum / num);
	return 0;
}
