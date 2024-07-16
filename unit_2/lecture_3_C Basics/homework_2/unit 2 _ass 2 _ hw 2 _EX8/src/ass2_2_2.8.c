/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX8
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : simple calculator
 ============================================================================
 */

#include <stdio.h>

int main() {
	 float x,y;
	 char c;
	printf("Enter a operator either + or - or * or / :");
		fflush(stdout);
			scanf("%c",&c);
			printf("Enter two operands : ");
					fflush(stdout);
						scanf("%f %f",&x,&y);

if(c=='+')
	printf("%f + %f = %f ",x,y,x+y);
else if (c=='-')
	printf("%f - %f = %f ",x,y,x-y);
else if (c=='*')
	printf("%f * %f = %f ",x,y,x*y);
else if (c=='/'){
	if( y!=0)
	printf("%f / %f = %f ",x,y,x/y);
	else
		printf("error y shouldnt be = 0");
}
	return 0;
}
