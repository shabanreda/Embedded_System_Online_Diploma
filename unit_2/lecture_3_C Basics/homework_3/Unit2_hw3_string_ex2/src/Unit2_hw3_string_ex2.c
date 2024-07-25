/*
 ============================================================================
 Name        : Unit2_hw3_string_ex2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100];
	int num = 0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
			break;
		num++;
	}
	printf("Length of string : %d", num);
	return 0;
}
