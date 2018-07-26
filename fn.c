#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Convert a binary number (encoded in decimal long format, max 19-bits) in decimal.
long bin_to_dec19(long bin)
{
	long dec = 0;
	int dig = 1;
	
	while (bin) {
		if (bin % 10 == 1)
			dec += dig;
		dig *= 2;
		bin = bin / 10;
	}

	return dec;
}	

//Convert a binary number (encoded in a string, max 64-bits) in decimal.
//Doesn't work past 32-bit inputs??
long bin_to_dec64(char bin[])
{
	int i = 0, j = 0, k = strlen(bin) - 1, tmp = 0;
	long dec = 0;
	int dig = 1;

	printf("ok\n");
	
	//Reverse binary string
	while (strlen(bin) > 1) {
		
		tmp = bin[k];
		bin[k] = bin[j];
		bin[j] = tmp;
		j++, k--;
		printf("reverse1 ok\n");
		if((strlen(bin) % 2 == 0 && k == j - 1) || (strlen(bin) % 2 != 0 && k == j))
			break;
	}
	
	//'Translate' the binary number into a decimal number
	while (bin[i] != '\0') {
		if (bin[i] == '1') {
			dec += dig;
		}
		
		if (bin[i] != '0' && bin[i] != '1') {
			printf("Error: Not a binary number.\n");
			exit(EXIT_FAILURE);
		}
		i++;
		dig *= 2;
	}

	return dec;
}
