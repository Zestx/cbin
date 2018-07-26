#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fn.h"

int main(void)
{
	char bin[65] = {0};
	char *newline = NULL;
	
	//Get user input and replace '\n' by '\0'.
	printf("Enter binary number (64bits): ");
	if (fgets(bin, 64, stdin) != NULL) {
		newline = strchr(bin, '\n');
		if (newline != NULL) { 
			*newline = '\0';
		}
	//Return decimal conversion of the binary input.
		printf("In decimal: %ld\n", bin_to_dec64(bin));	
	} else { //Return error if string is empty.
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	

	return 0;
}
	
