class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
            return 0;
        int count = 0;
        int prod = 1;
        int r = 0 , l = 0;
        while(r < nums.size()){
            prod *= nums[r];  

            while(prod >= k){
                prod /= nums[l];
                l++;
                }

            count += r-l+1;
            r++;
        }
            

        return count;
    }
};