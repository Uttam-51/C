#include <stdio.h>
#include <conio.h>

void readValues(int rows, int cols, int array[rows][cols]){
	int i, j;
	
	for(i = 0; i < rows ; i++){
		for(j = 0; j < cols ; j++){
		printf("Enter element: ");
		scanf("%d", &array[i][j]);	
		}	
	}
}
	
void printValues(int rows, int cols, int array[rows][cols]){
	int i, j;
	for(i = 0; i < rows ; i++){
		for(j = 0; j < cols ; j++){
		printf("%d\t", array[i][j]);	
		}	
		printf("\n");
	}
	
}

int main(){
	
	int mat1[2][2], mat2[2][2], i, j;
	
	printf("\n\t\tMatrix Multiplication");
	printf("\n----------Matrix 1-----------\n\n");

	readValues(2, 2, mat1);	
	
	printf("\n\n");
	printValues(2, 2, mat1);

	
	printf("\n----------Matrix 2-----------\n\n");
	
	readValues(2, 2, mat2);
	
	printf("\n\n");
	printValues(2, 2, mat2);
	
	printf("\n-----------Result: Multiplication Matrix-----------\n\n");
	
	for(i = 0; i < 2 ; i++){
		for(j = 0; j < 2 ; j++){
		printf("%d\t", mat1[i][j]*mat2[i][j]);	
		}	
		printf("\n");
	}
	printf("\n--------------------------------\n");	
	
	getch();
	return 0;
}
