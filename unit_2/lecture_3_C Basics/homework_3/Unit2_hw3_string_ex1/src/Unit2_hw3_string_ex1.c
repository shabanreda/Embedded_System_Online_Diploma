/*
 ============================================================================
 Name        : Unit2_hw3_string_ex1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100], ch;
	int num = 0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	printf("Enter a character to find frequency :  ");
	fflush(stdout);
	scanf("%c", &ch);
	fflush(stdin);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ch)
			num++;

	}
	printf("Frequency of %c = %d", ch, num);

	return 0;
}
