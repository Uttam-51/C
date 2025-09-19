#include <stdio.h>
#include <conio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("%d is ", n);
    if(n != 0){
    	printf("%s", (n%2==0)?"Even,":"Odd,");
	}
    
	if(n>0) {
		printf(" Positive");
	}
    else if(n<0){
    	 printf(" Negative");
	}
    else {
    	printf("Zero");
	}
		

    if(n%3==0 && n%5==0){
    	 printf(", and it is multiple of 3 and 5\n");
	}
	getch();
	
    return 0;
}
