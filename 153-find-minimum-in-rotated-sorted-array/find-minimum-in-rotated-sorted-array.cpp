class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        int mid;
        int ans = INT_MAX;
        while(l <= h){
            mid = l + (h-l)/2;
            if(nums[mid] <= nums[h]){
                ans = min(ans , nums[mid]);
                h = mid-1;
            }
            else if(nums[mid] >= nums[l]){
                ans = min(ans,nums[l]);
                l = mid+1;
            }
        }
        return ans;
    }
};