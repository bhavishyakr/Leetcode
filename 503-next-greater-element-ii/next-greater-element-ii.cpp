class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        stack<int>s;
        for(int i=0;i<nums.size();i++)
            s.push(nums.size() - 1 - i);
        int r = nums.size()-1;
        while(r>=0){
            while(( !s.empty()) && nums[s.top()] <= nums[r]){
                s.pop();
            }
            if(!s.empty())
                ans[r] = nums[s.top()];
            s.push(r);
            r--;
        }
        

        return ans;
    }
};