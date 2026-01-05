int maxSum(int* nums, int numsSize) {
    if (numsSize == 1) {
        return nums[0];
    }
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    int smol = INT_MIN;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > smol && nums[i] < 1) {
            smol = nums[i];
        }
    }
    int smol_f = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            smol_f = 1;
        }
    }
    if (smol_f == 0) {
        return smol;
    } 
    int freq[101] = {0};
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            freq[nums[i]]++;
        }
    }
    int max = 0;
    for (int i = 0; i < 101; i++) {
        if (freq[i] > 0) {
            max += i;
        }
    }
    return max;
}