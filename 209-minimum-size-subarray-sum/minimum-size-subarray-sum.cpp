class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int ans = INT_MAX;
        int right = 0;
        while(right < nums.size() ){
            sum += nums[right];             

        while(sum >= target){
            ans = min(ans , right - left + 1);
            sum -= nums[left];
            if(sum >= target){

            ans = min(ans , right - left );
            }
            left++;
        }
        right++;

        }
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};