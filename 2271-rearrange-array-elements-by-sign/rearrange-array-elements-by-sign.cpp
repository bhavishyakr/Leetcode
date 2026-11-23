class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0 , neg = 0;
        vector<int>ans;
        while(pos < nums.size() && neg < nums.size()){
            while(pos < nums.size() && nums[pos] < 0) pos++;
            ans.push_back(nums[pos++]);
            while(neg < nums.size() && nums[neg] > 0) neg++;
            ans.push_back(nums[neg++]);
        }
        return ans;
    }
};