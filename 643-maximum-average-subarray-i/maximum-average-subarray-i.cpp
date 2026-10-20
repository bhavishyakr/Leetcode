class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.000000;
        int l = 0;
        int r = 0;
        double max_avg;
        while(r < nums.size()){
            if(r < k){
                sum += nums[r];
                max_avg = sum;
            }
            if(r == k-1){
                max_avg = sum / k ;
            }
            else if(r >= k){
                sum = sum + nums[r] - nums[l++];
                max_avg = max(max_avg, sum/k);
            }
            r++;
        }
        return max_avg;
    }
};