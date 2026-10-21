class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size(); i++)
            mp[nums[i]] = i;
        for(int j = 0; j<nums.size(); j++){
            int complement = target - nums[j];
            if(mp[complement] && mp[complement] != j)
                return {j , mp[complement]};
        }
        
        return ans;
    }
};