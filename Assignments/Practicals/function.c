#include<stdio.h>
#include<conio.h>

int fact(int);

void main(){
	int num;
	printf("\nPlease enter a number to calculate factorial: ");
	scanf("%d", &num);
	printf("\nFactorial of %d is %d", num, fact(num));
	getch();
}

int fact(int n){
	int i, result = 1;
	for(i = n; i>=1; i--){
		if(n == 0){
			return 1;
		}
		result *= i;
	}
	return result;
}
