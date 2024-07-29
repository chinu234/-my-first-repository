#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	printf("Enter  a charcter : ");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
			printf("charcter is vowel and you have entered %c",ch);
		break;
		case 'e':
			printf("character is vowel and you have entered %c",ch);
		break;
		case 'i':
			printf("character is vowel and you have entered %c",ch);
		break;
		case 'o':
			printf("character is vowel and you have entered %c",ch);
		break;
		case 'u':
			printf("character is vowel and you have entered %c",ch);
		break;
		    
		
		default: printf("non vowel and somthing");
	}
}
