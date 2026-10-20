class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int num : nums){
            int idx = abs(num);
            if(nums[idx] < 0) return idx;
            else nums[idx] = -nums[idx];
        }
        
        return 0;
    }
};