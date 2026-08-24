class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(int i=0; i<nums.size() ; i++){
            if(nums[i] == target || target <= nums[i])
                return i;
        }
        // for(int i=0 ; i<nums.size() ; i++){
        //     if(target <= nums[i]){
        //         return i;
        //     }
        // }
        return i;
    }
};