bool isIsomorphic(char* s, char* t) {
	int arr[255];
	int mapped[255];
	int i=0;
	for (i=0; i<255;++i) {
		arr[i] = 0;
		mapped[i] = 0;
	}
	while(*s && *t) {
		if (arr[*s] == 0) {
			if (mapped[*t] != 0) {
				return false;
			}
			arr[*s] = *t;
			mapped[*t] = 1;
		} else if(arr[*s] != *t) {
			return false;
		}
		
		++s;
		++t;
	}
	if (*s || *t) {
		return false;
	}
	return true;		
}

/*
Runtime: 2 ms
未考虑到的测试用例类型
ab aa
*/