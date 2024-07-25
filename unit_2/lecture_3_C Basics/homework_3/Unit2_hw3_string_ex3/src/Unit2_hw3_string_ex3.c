/*
 ============================================================================
 Name        : Unit2_hw3_string_ex3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[100];
	int i;
	printf("Enter the string  : ");
	fflush(stdout);
	scanf("%s", str);
	fflush(stdin);
	printf("Reverse string is : ");
	for (i = strlen(str) - 1; i >= 0; i--)
		printf("%c", str[i]);

	return EXIT_SUCCESS;
}
