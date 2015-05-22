int majorityElement(int* nums, int numsSize) {
    int key = 0;
    int value = 0;
    if (numsSize == 1) {
        return nums[0];
    }
    key = nums[0];
    value = 1;
    int i;
    for(i=1; i<numsSize; ++i) {
        if (nums[i] == key) {
            ++value;
        } else if(value > 0) {
            --value;
        } else if (value == 0) {
            key = nums[i];
            value = 1;
        }
    }
    return key;
}
/*
Runtime: 8 ms
*/