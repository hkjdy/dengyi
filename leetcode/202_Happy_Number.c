int calc(int n) {
	int result = 0;
	while(n>0) {
		int tmp = n%10;
		result += tmp*tmp;
		n /= 10;
	}
	return result;
}

bool isHappy(int n) {
	int tmp = n;
    int arr[1000] = {0};
	while( (n=calc(n)) != 1 ) {
	    if (arr[n] == 1) {
            return false;
	    }
		if (tmp == n) {
			return false;
		}
		arr[n] = 1;
		tmp = n;
	}
	return true;
}
/*
Runtime: 0 ms
error case 1: 2
*/