class Solution {
public:
int subarr(int idx , vector<int> nums){
    int pre = 0, suff = 0;
    int p_idx = idx;
    int s_idx = idx;
    while(--p_idx >= 0) {
        if(nums[p_idx] != 0)
            pre++;
        else
            break;
    }
    while(++s_idx < nums.size()) {
        if(nums[s_idx] != 0)
            suff++;
        else
            break;
    }
    return pre + suff;
}
    int longestSubarray(vector<int>& nums) {
        int i=0 , maxi=0;
        bool ans = true;
        for(int z=0;z<nums.size();z++){
            if(nums[z] != 0)
                break;
            else if(z == nums.size()-1)
                return 0;
        }
        while(i < nums.size()){
            if(nums[i] == 0){
                maxi = max(maxi, subarr(i, nums));
                ans = false;
            }
                i++;
        }
        if(ans)
            return nums.size()-1;
        return maxi;
    }
};