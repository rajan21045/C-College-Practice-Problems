/*
Write a C program to find the sum of two matrix of order m×n. 

*/

#include<stdio.h>
int main(){
	

	int first[40][40],second[40][40],sum[40][40];
	int i,j,m,n;
	
	printf("Enter the size of row: ");
	scanf("%d",&m);
	
	printf("Enter the size of column: ");
	scanf("%d",&n);
	
	printf("Enter the element for first array \n");
	for(i=0; i<m;i++)
	{
		for(j=0; j<n; j++){
			scanf("%d",&first[i][j]);
		}
	}
	
	printf("Enter the element for second array \n");
	for(i=0; i<m;i++)
	{
		for(j=0; j<n; j++){
			scanf("%d",&second[i][j]);
		}
	}

	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			sum[i][j] = first[i][j]+ second[i][j];
		}
	}
	printf("The sum of two matrix is \n ");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
		printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
