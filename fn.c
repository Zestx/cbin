#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Convert a binary number (encoded in a string, max 64-bits) in decimal.
long bin_to_dec64(char bin[])
{
	int i = 0;
	long dec = 0;

	while (bin[i] != '\0') {
		dec *= 2;
		if (bin[i] == '1')
			dec += 1;
		i++;
	}
	
	return dec;
}

