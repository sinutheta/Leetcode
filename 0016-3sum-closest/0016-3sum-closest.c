#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), compare);

    int closestSum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int total = nums[i] + nums[left] + nums[right];

            if (abs(total - target) < abs(closestSum - target))
                closestSum = total;

            if (total == target)
                return total;
            else if (total < target)
                left++;
            else
                right--;
        }
    }
    return closestSum;
}
