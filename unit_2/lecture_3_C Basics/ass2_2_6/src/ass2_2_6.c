/*
 ============================================================================
 Name        : ass2_2_6.c
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
int main() {
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b: ");
			fflush(stdout);
				scanf("%f",&b);
				temp=a;
				a=b;
				b=temp;
		printf("After swapping, value of a = %f\n",a);
		printf("After swapping, value of b = %f\n",b);

	return 0;
}
