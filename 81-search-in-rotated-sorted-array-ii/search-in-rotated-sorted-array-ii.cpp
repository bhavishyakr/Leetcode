class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int el:nums){
            if(target == el)
                return true;
        }
        return false;
    }
};