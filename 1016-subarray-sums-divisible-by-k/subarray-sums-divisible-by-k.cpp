class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        mp[0]++;
        int r = 0 , pre = 0 , count = 0;
        while(r < nums.size()){
            pre += nums[r];
            int rem = pre % k;
            if(rem < 0) rem += k;
            count += mp[rem];
            mp[rem]++;
            r++;
        }
        return count;
    }
};