#include<stdio.h>
int main(){
	int i,j,arr[3][3],a[3][3];
	printf("Enter the element in the array:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[j][i] = arr[i][j];
		}
	}
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
