#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    int i = 0;
    for (i=0; i<numsSize; ++i) {
            result ^= nums[i];
    }
    return result;
}

int main()
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10,12,1,2,3,4,5,6,7,8,9,10};
    printf("%d", singleNumber(nums, 21));
    return 0;
}
/*
	leetcode 136 Single Number
	https://leetcode.com/problems/single-number/
*/