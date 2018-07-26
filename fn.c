#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long power(int base, int exp)
{
	int i = 1;
	long result = 0;
	if (exp == 0)
		result = 1;
	else {
		result = base;
		while (i < exp) {
			result = result * base;
			i++;
		}
	}

	return result;
}

long bin_to_dec19(long bin)
{
	long dec = 0;
	int i = 0;
	
	while (bin) {
		if (bin % 10 == 1)
			dec = dec + power(2, i);
		bin = bin / 10;
		i++;
	}

	return dec;
}	

int bin_to_dec64(char bin[])
{
	int i = 0, j = 0, k = 0;
	int dec = 0;

	while (bin[j] != '\0') {
		printf("%c", bin[j]);
		j++;
	}
	printf("\n");
	while (bin[i] != '\0') {
		if (bin[i] == '1') {
			dec = dec + power(2, i);
		}
		if (bin[i] != '0' && bin[i] != '1') {
			printf("Error: Not a binary number.\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}

	return dec;
}
