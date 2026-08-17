class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        int a_s = (sz* (sz+1))/2;
        int c_s = 0;
        for(int i = 0 ; i < sz ; i++){
            c_s += nums[i];
        }
        int missing_number;
        missing_number = a_s - c_s ;
        return missing_number;
    }
};