class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>presum(nums.size(),0); 
        vector<int>suffsum(nums.size(),0);
        presum[0] = 0;
        suffsum[nums.size()-1] = 0;
        for(int i=1; i<nums.size(); i++){
            presum[i] = nums[i-1] + presum[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--){
            suffsum[i] = nums[i+1] + suffsum[i+1];
            cout<<presum[i]<<suffsum[i]<<" ";
        }
        for(int i=0; i<nums.size(); i++)
            if(presum[i] == suffsum[i]){
            cout<<presum[i]<<suffsum[i]<<" ";
                return i;
            }
        return -1;
    }
};