#include <stdio.h>
#include <conio.h>
// #include <windows.h>

int main(){

    for(int i = 1; i <= 10 ; i++){

        for(int j = 0; j < 10 - i; j++){
            // Sleep(100);
            printf(" ");
        }
        for(int k = 0; k < i ; k++){
            // Sleep(200);
            printf("*");
        }
        // Sleep(100);
        printf("\n");
    }

    getch();
    return 0;
}