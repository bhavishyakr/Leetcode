class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>>s;
    sort(nums.begin(),nums.end());
    int sum;
    for(int i=0; i<nums.size()-2; i++){
        int st = i+1;
        int end = nums.size()-1;
        while(st<end){
        sum = nums[i] + nums[st] + nums[end];
        if(sum == 0){
            s.insert({nums[i] , nums[st] , nums[end]});
            while(st < end && nums[st] == nums[st+1]) st++;
            while(st < end && nums[end] == nums[end-1]) end--;
            st++;
        }
        else if(sum < 0) st++;
        else end--;
        }
    }
        vector<vector<int>>ans(s.begin(),s.end());
    return ans;
    }
};