char* convertToTitle(int n) {
    char *result = malloc(sizeof(char)*10);
    int i = 0;
    
    while(n>0) {
        result[i++] = (n-1)%26 + 'A';
        n = (n-1) / 26;
    }
    
    int j = 0;
    --i;
    while (j<i) {
        char c = result[j];
        result[j] = result[i];
        result[i] = c;
        ++j;
        --i;
    }

    return result;
}
/*
Runtime: 0 ms
*/