uint32_t reverseBits(uint32_t n) {
	uint32_t result = 0;
	int i = 0;
	for (i=0; i<32; ++i) {
		result <<= 1;
		result |= (n&1);
		n >>= 1;
	};
	return result;
}

/*
Runtime: 0 ms
error:1
Input:	           1 (00000000000000000000000000000001)
Output:	           1 (00000000000000000000000000000001)
Expected:	  2147483648 (10000000000000000000000000000000)
*/