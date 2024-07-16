/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX1
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : check whether the number is even or odd
 ============================================================================
 */

#include <stdio.h>
int main() {
	char x;
	printf("Enter an integer you want to check : ");
	fflush(stdout);
		scanf("%d",&x);
		if(x%2==0)
		printf("%d is even ",x);
		else
			printf("%d is odd ",x);
	return 0;
}

