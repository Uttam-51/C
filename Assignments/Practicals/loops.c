#include <stdio.h>
#include <conio.h>

void main(){

    int i = 1;

    printf("**********FOR LOOP***********\n");

    for(int i = 0; i < 10; i++){
        printf(" %d,", i+1);
    }
    printf("\n\n");

    printf("**********WHILE LOOP***********\n");
    while(i<=10){
        printf(" %d,", i);
        i++;
    }
    printf("\n\n");

    printf("**********DO WHILE LOOP***********\n");
    i = 1;
    do{
        printf(" %d,", i);
        i++;
    }while(i<=10);

    getch();

}
