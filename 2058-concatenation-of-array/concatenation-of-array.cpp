class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>a(nums);
        for(int v : nums){
         a.push_back(v);   
        }
        
    return a;
    }
};
