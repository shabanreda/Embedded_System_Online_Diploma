/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX4
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {
	float x;
	printf("Enter a numbers : ");
	fflush(stdout);
		scanf("%f",&x);

	   if(x>0)
		    	printf("%f is positive",x);
	    else if(x<0)
				printf("%f is negative",x);
	     else
				printf("you entered zero " );
	return 0;
}
