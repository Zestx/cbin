#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Convert a binary number (encoded in a string, max 64-bits) in decimal.
long bin_to_dec64(char bin[])
{
	int i = 0, curr = 0;
	long dec = 0;
	unsigned long dig = 1;

	//Set 'curr' to the end of the string.
	while (bin[i] != '\0') {
		curr = i;
		i++;
	}
	//Convert.
	while (curr >= 0) {
		if (bin[curr] == '1') 
			dec += dig;
		//Test if bin[] is actually a binary number.
		if (bin[curr] != '0' && bin[curr] != '1') {
			printf("Error: Not a binary number.\n");
			exit(EXIT_FAILURE);
		}
		dig *= 2;
		curr--;
	}

	return dec;
}
