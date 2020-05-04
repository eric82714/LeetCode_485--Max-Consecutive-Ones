int findMaxConsecutiveOnes(int* nums, int numsSize){
    int result = 0;
    int count = 0;
        
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) count ++;
        if(nums[i] == 0 || i == numsSize-1) {
            if(count > result) result = count;
            count = 0;
        }
    }
            
    return result;
}
