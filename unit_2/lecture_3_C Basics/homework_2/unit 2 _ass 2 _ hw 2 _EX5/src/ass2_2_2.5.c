/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX5
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : check whether the character is alphabet or not
 ============================================================================
 */

#include <stdio.h>

int main() {
	char x;
	printf("Enter a character : ");
		fflush(stdout);
			scanf("%c",&x);

			if(((x<91) && (x>64))||((x<123) && (x>96)))
				printf("%c is an alphabet ",x);
			else
				printf("%c is not an alaphabet ",x);

	return 0;
}
