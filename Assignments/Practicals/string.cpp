#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	
	printf("Enter string 1: ");
	gets(str1);
	printf("\nEnter string 2: ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("\nConcatinated string: %s", str1);
	printf("\nLength of this string is: %d", strlen(str1));
	
	getch();
	return 0;
}
