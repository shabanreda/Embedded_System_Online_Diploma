/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX6
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : sum of increamented numbers
 ============================================================================
 */

#include <stdio.h>

int main() {
	int x;
	printf("Enter a integer : ");
	//	fflush(stdout);
			scanf("%d",&x);
int sum=0;
			for(int i=1;i<=x;i++)
				sum+=i;
			printf("Sum = %d ",sum);
	return 0;
}
