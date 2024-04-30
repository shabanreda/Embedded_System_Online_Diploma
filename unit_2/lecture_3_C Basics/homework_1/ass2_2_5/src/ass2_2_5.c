/*
 ============================================================================
 Name        : ass2_2_5.c
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
int main() {
	char x;
	printf("Enter a character : ");
	fflush(stdout);
		scanf("%c",&x);
		printf("ASCII value of  %c = %d\n",x,x);

	return 0;
}
