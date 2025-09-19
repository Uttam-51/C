#include <stdio.h>
#include <conio.h>

int main(){
	
	int mat1[2][2], mat2[2][2], i, j;
	
	printf("\n\t\tMatrix Multiplication");
	printf("\n----------Matrix 1-----------\n\n");
	
	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 2 ; j++){
		printf("Enter element: ");
		scanf("%d", &mat1[i][j]);	
		}	
	}
	
	printf("\n\n");
	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 2 ; j++){
		printf("%d\t", mat1[i][j]);	
		}	
		printf("\n");
	}
	
	printf("\n----------Matrix 2-----------\n\n");
	
	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 2 ; j++){
		printf("Enter element: ");
		scanf("%d", &mat2[i][j]);	
		}	
	}
	
	printf("\n\n");
	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 2 ; j++){
		printf("%d\t", mat1[i][j]);	
		}	
		printf("\n");
	}
	
	printf("\n----------Result: Multiplication Matrix-----------\n\n");
	
	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 2 ; j++){
		printf("%d\t", mat1[i][j]*mat2[i][j]);	
		}	
		printf("\n");
	}
	printf("\n--------------------------------");
	
	
	printf("\n");
	getch();
	return 0;
}
