class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0 , r = 0 , zeroes = 0 , ans = 0, sz = nums.size();
        while(r < sz){
            if(nums[r] == 0) zeroes++;
            while(zeroes > 1){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans - 1;
    }
};