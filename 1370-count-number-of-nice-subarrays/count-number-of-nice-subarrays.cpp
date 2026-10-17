class Solution {
public:
int atMost(vector<int>&nums , int k){
        if(k<0)
            return 0;
       int count = 0;
       int r = 0;
       int l = 0;
       int sum = 0;
       while(r < nums.size()){
        sum += nums[r] % 2;
        while( sum > k){
            sum -= nums[l] % 2;
            l++;
        }
        count += r - l + 1;
        r++;
       }
       return count;
}

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums , k-1);
    }
};
