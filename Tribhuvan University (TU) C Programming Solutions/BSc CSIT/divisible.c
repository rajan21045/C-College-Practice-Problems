/*
Write a C code to check if user given input is exactly divisible by 5 or 11 using nested if else statement?
*/

#include<stdio.h>
int main(){
	
	int n;
	printf("Enter The Number: ");
	scanf("%d",&n);
	
	if(n%5==0){
		printf("%d Is Divisible By 5",n);
	} 
	
	else if(n%11 ==0){
		printf("%d Is Divisible By 11",n);
	}
	
	else{
		printf("The Number Is Not Divisible By 5 Or 11");
	}
		return 0;	
}
