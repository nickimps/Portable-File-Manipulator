/*

ESOF 3655 Project

Nicholas Imperius
Jimmy Tsang
Jarrod Grasley

This file creates a file in the same directory as where the program is being run

*/

#include <stdio.h>
#include <unistd.h>

void create() {
	//Initialize file variable and char arrays
	char fileName[800];
	
	//Get file name from the user
	printf("Enter the new file's name: ");
	scanf("%s", fileName);
	
	FILE *fptr = fopen(fileName, "wb");
	
	//if the file exists, then we try to create it
	// else, let user know it exists already
	if(access(fileName, F_OK) == 0)
		if (fptr)
			printf("File has been created.\n");
		else
			printf("Error: Unable to create the file.\n");
	else
		printf("Error: The file you want to create already exists.\n");
	
	fclose(fptr);
}
