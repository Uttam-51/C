#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{

    int num1, num2;

    system("cls");
    printf("Enter Integer 1: ");
    scanf("%d", &num1);

    printf("Enter Integer 2: ");
    scanf("%d", &num2);

    printf("\n***************************************\n");
    printf("\tArithmetic Operations");
    printf("\n***************************************\n");

    printf("1) Addition: %d + %d = %d", num1, num2, num1 + num2);
    printf("\n2) Subtraction: %d - %d = %d", num1, num2, num1 - num2);
    printf("\n3) Multiplication: %d x %d = %d", num1, num2, num1 * num2);
    printf("\n4) Division: %d / %d = %d", num1, num2, num1 / num2);
    printf("\n5) Modulus: %d %% %d = %d", num1, num2, num1 % num2);

    printf("\n\n***************************************\n");
    printf("\tRelational Operations");
    printf("\n***************************************\n");

    printf("\nEnter Integer 1: ");
    scanf("%d", &num1);

    printf("Enter Integer 2: ");
    scanf("%d", &num2);

    printf("\n1) Equal to: %d == %d : %s\n", num1, num2, (num1 == num2 ? "true" : "false"));
    printf("2) Not equal to: %d != %d : %s\n", num1, num2, (num1 != num2 ? "true" : "false"));
    printf("3) Less than: %d < %d : %s\n", num1, num2, (num1 < num2 ? "true" : "false"));
    printf("4) Greater than: %d > %d : %s\n", num1, num2, (num1 > num2 ? "true" : "false"));
    printf("5) Less than or equal to: %d <= %d : %s\n", num1, num2, (num1 <= num2 ? "true" : "false"));
    printf("6) Greater than or equal to: %d >= %d : %s\n", num1, num2, (num1 >= num2 ? "true" : "false"));

    printf("\n\n***************************************\n");
    printf("\tLogical Operations");
    printf("\n***************************************\n");
    printf("---In C, any non-zero number is treated as true (1), and 0 is treated as false (0).\n");
    printf("  So, test with 0's and 1's\n");

    printf("\nEnter Integer 1: ");
    scanf("%d", &num1);

    printf("Enter Integer 2: ");
    scanf("%d", &num2);

    printf("1) Logical AND (%d && %d) : %s\n", num1, num2, num1 && num2 ? "true" : "false");
    printf("2) Logical OR (%d || %d) : %s\n", num1, num2, num1 || num2 ? "true" : "false");
    printf("3) Logical NOT !%d : %s\n", num1, !num1 ? "true" : "false");
    printf("3) Logical NOT !%d : %s\n", num2, !num2 ? "true" : "false");

    getch();
}