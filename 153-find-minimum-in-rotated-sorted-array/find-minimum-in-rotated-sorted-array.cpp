class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<mini)
                mini = nums[i];
        }
        return mini;
    }
};