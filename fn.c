long power(int base, int exp)
{
	int i = 1;
	long result = base;
	while (i < exp) {
		result = result * base;
		i++;
	}

	return result;
}

int bin_to_dec(int bin)
{
	int dec = 0;
	int i = 0;

	while (bin) {
		if (bin % 10 == 1)
			dec = dec + power(2, i);
		bin = bin / 10;

		i++;
	}

	return dec;
}

int dec_to_bin(int dec)
{
	int bin = 0;
	int i = 0;

	while (dec) {
		if (dec - power(2, i) > 0)
			bin = bin + power(10, i);
		dec = dec - power(2, i);
		i++;
	}

	return bin;
}	

