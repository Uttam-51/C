#include <stdio.h>
#include <conio.h>
int main() {
    int a, b; char op;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // <-- notice the space before %c
    
    switch(op){
        case '+': printf("\nResult: %d + %d = %d", a, b, a+b); break;
        case '-': printf("\nResult: %d - %d = %d", a, b, a-b); break;
        case '*': printf("\nResult: %d x %d = %d", a, b, a*b); break;
        case '/': if(b!=0) {
						printf("\nResult: %d / %d = %d", a, b, a/b); 
					}else {
						printf("Div by 0!\n"); 
					}
					break;
        case '%': printf("\nResult: %d %% %d = %d", a, b, a%b); break;
        default: printf("Invalid operator!\n");
    }
    getch();
    
    return 0;
}

