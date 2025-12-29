int countPartitions(int* nums, int numsSize) {
    int sum= 0;
    for(int i = 0; i< numsSize; i++){
        sum+=nums[i];
    }
    if(sum %2 == 0)
    {
        return numsSize-1;
    }
    else{
        return 0;
    } 
}