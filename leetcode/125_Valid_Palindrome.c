int isAlphanumeric(char c) {
    if (c>='a' && c<='z' || c>='0' && c<='9') {
        return 1;
    }
    return 0;
}

int isPalindrome(char* s) {
    int len = 0;
    char* p = s;
    while (*p++) {
        if (s[len] >= 'A' && s[len] <= 'Z') {
            s[len] += ('a' - 'A');
        }
        ++len;
    }

    int i=0, j=len-1;
    while(i<j) {
        while ( i<j && i< len && !isAlphanumeric(s[i])) {
            ++i;
        }

        while ( j>i && j>=0 && !isAlphanumeric(s[j])) {
            --j;
        }

        if (i<j && s[i] != s[j]) {
            return 0;
        }
        ++i;
        --j;
    }
    return 1;
}