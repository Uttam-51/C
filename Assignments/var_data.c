#include <stdio.h>
#include <float.h>
#include <conio.h>
#include <stdlib.h>

void main()
{

    //Remaining part: declaring and printing constants and adding comments
    int a = 10;
    float b = 20.0;
    double c = 2000.0;
    char d = 'U';
    long e = 5252525.222;
    char f[] = "Hellow";

    system("cls");
    printf("I am an integer. My value is %d, and my size is %zu bytes", a, sizeof(a));
    printf("\nI am a float. My value is %f, and my size is %zu bytes", b, sizeof(b));
    printf("\nI am a double. My value is %lf, and my size is %zu bytes", c, sizeof(c));
    printf("\nI am a char. My value is %c, and my size is %zu bytes", d, sizeof(d));
    printf("\nI am a long. My value is %ld, and my size is %zu bytes", e, sizeof(e));
    printf("\nI am a string(character array). My value is %s, and my size is %zu bytes", f, sizeof(f));

    getch();
}