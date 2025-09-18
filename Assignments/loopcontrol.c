#include <stdio.h>
#include <conio.h>

void main(){

    for(int i = 0 ; i < 10; i++){

        if(i==3){
            continue;
        }

        if(i==5)
        {
            break;
        }
        printf(" %d,", i+1);
        
    }


    getch();
}