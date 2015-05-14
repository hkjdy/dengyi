int lengthOfLastWord(char* s) {
    int len = 0;
    int last_len = 0;
    while (*s) {
        if (*s == ' '){
            last_len = (len == 0) ? last_len : len;
            len = 0;
        } else {
            ++len;
        }
        ++s;
    }
    return (len == 0) ? last_len : len;
}