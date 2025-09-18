#include <stdio.h>
#include <conio.h>



void main()
{

    int num;

    printf("\nPlease enter a number between 1 to 12: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n%d is an Even number.", num);
    }
    else
    {
        printf("\n%d is an Odd number.", num);
    }

    // printf("\n\nName of month %d is: January", num);
    switch(num)
    {
    case 1:
        printf("\n\nName of month %d is: January", num);
        break;
    case 2:
        printf("\n\nName of month %d is: February", num);
        break;
    case 3:
        printf("\n\nName of month %d is: March", num);
        break;
    case 4:
        printf("\n\nName of month %d is: April", num);
        break;
    case 5:
        printf("\n\nName of month %d is: May", num);
        break;
    case 6:
        printf("\n\nName of month %d is: June", num);
        break;
    case 7:
        printf("\n\nName of month %d is: July", num);
        break;
    case 8:
        printf("\n\nName of month %d is: August", num);
        break;
    case 9:
        printf("\n\nName of month %d is: September", num);
        break;
    case 10:
        printf("\n\nName of month %d is: October", num);
        break;
    case 11:
        printf("\n\nName of month %d is: November", num);
        break;
    case 12:
        printf("\n\nName of month %d is: December", num);
        break;
    default:
        printf("\n\nInvalid month number.");
    }

    getch();
}