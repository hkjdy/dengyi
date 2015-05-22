int titleToNumber(char* s) {
    int number = 0;
    while(*s) {
    	number = number*26+(*s-'A'+1);
    	++s;
    }
    return number;
}
/*
Runtime: 11 ms
*/