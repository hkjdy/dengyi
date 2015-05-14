bool isNumber(char* s) {
    while (*s && (*s == ' ' || *s == '\t')) {
        ++s;
    }
    int len = 0;
    char *p = s;
    while(*p++) {
        ++len;
    }
    while(s[len-1] == ' ' || s[len-1] == '\t') {
        --len;
    }
    int i = 0;
    if (s[i] == '+' || s[i] == '-') {
        ++i;
    }
    int decimal = 0;
    int has_digit = 0;
    int num = 0;
    for(;i<len && s[i] != 'e' && s[i] != 'E'; ++i) {
            if (s[i]>='0' && s[i]<='9') {
                if (decimal == 0) {
                    num = num*10 + (s[i]-'0');
                }
                has_digit = 1;
            } else if (s[i] == '.' && decimal == 0) {
                decimal = 1;
            } else {
                return false;
            }
    }
    if (has_digit == 0) {
        return false;
    }
    ++i;
    if (i == len) {
        return false;
    } else if (i>len){
        return true;
    }
    if (s[i] == '+' || s[i] == '-') {
        ++i;
    }

    if (i==len) {
        return false;
    }

    while (i<len) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
        i++;
    }
    return true;
}