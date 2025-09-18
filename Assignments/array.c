#include<stdio.h>
#include<conio.h>

void main(){
	int arr1[5], arr2[3][3], i, j, sum = 0;
	
	printf("\nEnter Array 1 elements.");
	for(i=0; i<5; i++){
		printf("\nPlease enter the array element Array1[%d]: ", i+1);
		scanf("%d", &arr1[i]);
	}
	

	for(i=0; i<5; i++){	
		sum += arr1[i];
	}
	
	printf("\nSum of Array1 is %d", sum);
	sum = 0;
	
	printf("\n\nEnter Array 2 elements.");
	for(i = 0; i < 3; i++){
		for(j=0; j < 3; j++){
		printf("\nPlease enter the array element Array2[%d][%d]: ", i,j);
		scanf("%d", &arr2[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j=0; j < 3; j++){
			sum += arr2[i][j];
		}
	}
	
	
	printf("\n\nSum of Array2 is %d", sum);
	getch();
}
