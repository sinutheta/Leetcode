int longestSubarray(int* nums, int numsSize){
    int n = numsSize, c0 = 0, t0 = 0, c = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        if (nums[r] == 1) {
            c++;
            if (c > ans) ans = c;
        } else if (nums[r] == 0 && c0 == 0) {
            c0++;
            t0 = r;
        } else if (nums[r] == 0 && c0 == 1) {
            c = r - t0 - 1;
            t0 = r;
        }
    }
    if (c0 < 1) {
    return ans - 1;
} else {
    return ans;
}
}