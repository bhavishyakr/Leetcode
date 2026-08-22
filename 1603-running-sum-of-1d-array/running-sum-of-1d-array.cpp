class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum(nums);
        int c_sum =0;
        for(int i=0 ; i<nums.size(); i++){
            c_sum += nums[i];
            sum[i] = c_sum;
        }

        return sum;
    }
};