#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fn.h"

int main(void)
{
	char bin[65] = {0};
	char *newline = NULL;

	printf("Enter binary number (64bits): ");
	//Get user input
	if (fgets(bin, 64, stdin) != NULL) {
		newline = strchr(bin, '\n');
		if (newline != NULL) { 
			*newline = '\0';
		}
		printf("In decimal: %ld\n", bin_to_dec64(bin));
	} else {
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	

	return 0;
}
	
