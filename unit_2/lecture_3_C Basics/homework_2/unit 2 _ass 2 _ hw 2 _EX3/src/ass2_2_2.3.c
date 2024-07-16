/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX3
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main() {
	float x,y,z;
	printf("Enter three numbers : ");
	fflush(stdout);
		scanf("%f \n %f \n %f",&x,&y,&z);

		if(x>y){
		    if(x>z)
			printf("largest number = %f ",x);
		    else
			printf("largest number = %f ",z);
		}
		else{
			if(y>z)
				printf("largest number = %f ",y);
			else
				printf("largest number = %f ",z);
		}
	return 0;
}
