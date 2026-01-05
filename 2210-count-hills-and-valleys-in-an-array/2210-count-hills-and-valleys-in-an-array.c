int countHillValley(int* nums, int numsSize) {
    int prev = 0;
    int count = 0;
    if (numsSize < 3) return 0;
    for(int i=1;i<numsSize-1;i++)
    {
        if (prev == 0)
        {
            if (nums[i] == nums[i-1]) 
            continue;
            if (nums[i] < nums[i-1])
                prev = 1;
            else
                prev = 2;
        } 
        if (nums[i] == nums[i+1]) 
        continue;
        if (prev > 0)
        {
            if ((prev==1) && (nums[i] < nums[i+1]))
            {
                count++;
            }
            else if ((prev==2) && (nums[i] > nums[i+1]))
            {
                count++;
            } 
            prev = 0;
        }
    }
    return count;
} 