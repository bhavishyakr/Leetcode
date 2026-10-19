class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>pre_sum(nums.size());
        vector<int>suff_sum(nums.size());
        pre_sum[0]=0;
        suff_sum[nums.size()-1]=0;
        for(int i = 1; i<nums.size();i++)
            pre_sum[i] = nums[i-1] + pre_sum[i-1];
        for(int i = nums.size()-2 ; i>=0; i-- )
            suff_sum[i] = nums[i+1] + suff_sum[i+1];
        vector<int>ans(nums.size(),0);
        for(int i = 0; i<nums.size(); i++){
            ans[i] = abs(pre_sum[i] - suff_sum[i]);
        }
        
        return ans;
    }
};