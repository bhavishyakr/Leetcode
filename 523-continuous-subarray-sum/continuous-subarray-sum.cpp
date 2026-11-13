class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        if(nums.size() < 2) return false;
        int sum = 0, rem;

        for(int i=0; i < nums.size(); i++){
            sum += nums[i];
            rem = sum % k;
            if(rem == 0 && i > 0) return true;
            if( mp.find(rem) != mp.end()){
                if(i - mp[rem] >= 2) return true; 
            }else
                mp[rem] = i;
        }
        return false;
    }
};