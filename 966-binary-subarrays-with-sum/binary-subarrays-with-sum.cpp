class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums , goal) - atMost(nums , goal-1);
       int h = 0 , t = 0 ,sum = 0, c = 0;
       while(t < nums.size()){
            sum += nums[t];
            while(h <= t && sum > goal){
                sum -= nums[h++];
            }
            if(sum <= goal) c += t - h + 1;
            t++;
       }
       return c;
    }
    int atMost(vector<int> nums , int goal){
        if(goal < 0 ) return 0;
        int h = 0 , t = 0 ,sum = 0, c = 0;
       while(t < nums.size()){
            sum += nums[t];
            while(h <= t && sum > goal){
                sum -= nums[h++];
            }
            if(sum <= goal) c += t - h + 1;
            t++;
       }
       return c;
    }
};