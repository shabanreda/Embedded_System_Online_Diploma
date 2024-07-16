/*
 ============================================================================
 Name        : unit 2 _ass 2 _ hw 2 _EX2
 Author      : shaban reda
 Version     :
 Copyright   : Your copyright notice
 Description : check whether the alphabet is vowel or consonent
 ============================================================================
 */

#include <stdio.h>
int main() {
	char x,r=' ',c[]={'a','e','i','o','u','A','E','I','O','U','\0'};
	printf("Enter an alphabet : \n");

	x='a';
		for(int i=0;i<10;i++){
		if(c[i]==x){
		printf("%c is vowel ",x);
		r='o';
		}
		}
		if(r!='o')
		printf("%c is consonant ",x);
	return 0;
}
