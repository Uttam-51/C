#include <stdio.h>
#include <unistd.h>  
#include <conio.h>

int main(){
	FILE *f;
	char s1[50], s2[50];
	
	printf("Enter the string you want to write to file: ");
	fgets(s1, 50, stdin);
	
	printf("\nWriting to file...");
	
	sleep(1);
	
	f = fopen("sampleFile.txt", "w");
	fprintf(f, "%s", s1);
	fclose(f);
	
	f=fopen("sampleFile.txt", "r");
		
	//now reading from file
	fgets(s2, 50, f);
	
	//Printing to console
	printf("\n\nReading from file...\n");
	printf("\n%s", s2);
	
	getch();
	return 0;
}
