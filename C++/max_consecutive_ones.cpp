class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0;
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) count ++;
            if(nums[i] == 0 || i == nums.size()-1) {
                if(count > result) result = count;
                count = 0;
            }
        }
            
        return result;        
    }
};
