#include <stdio.h>
#include <conio.h>

int main(){

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 0 ; j < 10 - i ; j++){
            printf(" ");
        }
        for(int k = 0 ; k < i ; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

    getch();
    return 0;
}