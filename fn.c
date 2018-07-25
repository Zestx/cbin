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

long bin_to_dec(long bin)
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

