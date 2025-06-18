#include<stdio.h>
int main()
{
	int i,n;
    
	printf("Enter The Number: ");
	scanf("%d",&n);
	
	int sum=0;
	
	while(i<=n)
	{
		sum += i*i;
		i++;
	}
	
	printf("The Sum Is %d",sum);
	return 0;
}

/*
Write a program that uses “while”loop to compute and prints the sum of a given numbers of squares. 
For example, if 4 is input, then the program will print 30, which is equal to 12+22+32+42
*/
