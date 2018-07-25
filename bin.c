#include <stdio.h>
#include <stdlib.h>
#include "fn.h"

int main(void)
{
	long bin = 0;
	printf("Enter binary number (max. 19bits): ");
	scanf("%ld", &bin);
	printf("%ld in decimal is %ld\n", bin, bin_to_dec(bin));

	return 0;
}
	
