/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX7
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : calculation of factorial
 ============================================================================
 */

#include <stdio.h>

int main() {
	long int x;
	printf("Enter a integer : ");
		fflush(stdout);
			scanf("%ld",&x);
int facl=1;
if(x==0)
	printf("factorial = 1 ");
else if (x<0)
	printf("Error!! Factorial of negative number doesn't exist");
else{
			for(int i=1;i<=x;i++)
				facl*=i;
			printf("facl = %d ",facl);
}
	return 0;
}
