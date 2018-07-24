#include <stdio.h>
#include <stdlib.h>
#include "fn.h"

int main(void)
{
	int dec = 0;
	printf("Enter decimal number: ");
	scanf("%d", &dec);
	printf("%d in binary is %d\n", dec, dec_to_bin(dec));

	return 0;
}
	
