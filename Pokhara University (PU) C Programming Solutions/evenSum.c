#include<stdio.h>
int main(){
	
	int num,i,sum=0;
	printf("Enter The Number To Find The Sum Of Even Number: ");
	scanf("%d",&num);
	
	if(num<2)
	{
		 printf("There are no even numbers up to %d.\n", num);
		 return 0;
	}
	else{
		
	for(i=2;i<=num;i+=2){
		sum += i;
		}	
	}
	
	printf("The Sum Of Even Numbers From 1 To %d Is %d", num, sum);
	
	return 0;
}
