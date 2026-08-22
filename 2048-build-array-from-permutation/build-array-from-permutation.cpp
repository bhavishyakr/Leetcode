class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n);
        for(int i = 0 ; i<nums.size(); i++){
            arr[i]=(nums[nums[i]]);
        }
        return arr;
    }
};