/*
 ============================================================================
 Name        : ass2_2_7.c
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
int main() {
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b: ");
			fflush(stdout);
				scanf("%f",&b);
				a=a+b;
				b=a-b;
				a=a-b;
		printf("After swapping, value of a = %f\n",a);
		printf("After swapping, value of b = %f\n",b);

	return 0;
}
