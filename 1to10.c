#include<stdio.h>
#include<conio.h>
void main(){
	int a=1,num;
	printf("Enter  a number for that you want to print the table");
	scanf("%d", &num);
	while(a<=10){
		printf("%d\n",a*num);
		a++;
	}
}
