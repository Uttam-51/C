#include <stdio.h>
#include <conio.h>

int main(){

    for(int i = 10; i > 0; i--)
    {

        for(int j = 10; j > i; j--){
            printf(" ");
        }

        for(int k = 0; k < i ; k++){
            printf("*");
        }

        printf("\n");
    }

    getch();
    return 0;
}