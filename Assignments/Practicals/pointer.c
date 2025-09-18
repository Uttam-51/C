#include <stdio.h>
#include <conio.h>
void main() {
    int num = 10, new;
    
    printf("\nCurrent value of variable: %d", num);
    
    printf("\nEnter a new value: ");
    scanf("%d",&new);
    
    
    int *ptr = &num;  // pointer stores address of num
    *ptr = new;  // modify value using pointer
    
    printf("Updated value: %d\n", num);
    getch();
}

