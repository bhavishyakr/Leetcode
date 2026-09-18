class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right;
        int zeroes = 0;
        int s_0;
        int ans=0;
        for(right = 0; right<nums.size(); right++ ){
            if(nums[right] == 0)
                zeroes++;
            if(zeroes > k){
                while(nums[left] != 0)
                    left++;
                left++;
                zeroes--;
            }
            if(zeroes == 2 || zeroes == k)
                s_0 = right;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};