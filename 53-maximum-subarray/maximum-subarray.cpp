class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum, max_sum=INT_MIN;
        for(int el : nums){
            sum += el;
            max_sum = max(max_sum,sum);
            if(sum < 0)
                sum = 0;
        }
        return max_sum;
    }
};