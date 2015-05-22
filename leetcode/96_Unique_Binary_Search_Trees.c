int numTrees(int n) {
    int a[100] = {1, 1};
    int i,j;
    for(j=2; j<=n;++j) {
         for(i=1; i<=j; ++i) {
            a[j] += a[i-1] * a[j-i];
        }
    }
    return a[n];
}
/*
Runtime: 1 ms
*/