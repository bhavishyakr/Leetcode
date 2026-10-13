class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<nums.size();i++)
            s.push(nums.size() - 1 - i);
        int r = nums.size()-1;
        while(r>=0){
            while(( !s.empty()) && nums[s.top()] <= nums[r]){
                s.pop();
            }
            if(s.empty())
                ans.insert(ans.begin(), -1);
            else
                ans.insert(ans.begin(), nums[s.top()]);
            s.push(r);
            r--;
        }
        // reverse(ans.begin(), ans.end());

        return ans;
    }
};