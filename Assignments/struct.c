#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student{
	char name[50];
	int rollno;
	double marks;
};

void main(){
	
	struct Student s[3];
	int i;
	for(i=0; i<3; i++){
		
		printf("\nEnter details for student %d:", i+1);
		printf("\nEnter name: ");
			
		//fflush(stdin);	
		//Works in Turbo C, but its not standard, because fflush() is supposed to be used for output stream
		//So using it with input stream is an undefined behaviour in standard C
		
		fgets(s[i].name, sizeof(s[i].name), stdin);
		//Removing new line character from the string that we just read
		//Because, fgets() reads the whole string along with new line character and 
		//it can create problems for trailing scanf() calls
		//Logic: find index of first occurence of '\n' and replace it 
		//with '\0' i.e. end of string character
		s[i].name[strcspn(s[i].name, "\n")] = '\0'; // remove newline
		
		printf("Enter roll number: ");
		scanf("%d", &s[i].rollno);
		
		//remove new line character from input buffer
		while (getchar() != '\n');
		
		printf("Enter marks: ");
		scanf("%lf", &s[i].marks);		
		
		//remove new line character from input buffer
		while (getchar() != '\n');
		
	}
	
	printf("\n************************************\n");
	printf("\tAll Student Details");
	printf("\n************************************");
	for(i=0;i<3;i++){
		
		printf("\n\nStudent: %d",i+1);
		printf("\nName: %s", s[i].name);
		printf("\nRoll number: %d", s[i].rollno);
		printf("\nMarks: %lf", s[i].marks);
	}
	
	getch();

}
