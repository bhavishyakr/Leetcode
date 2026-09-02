class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int el = nums[0];
        int k=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != el){
                el = nums[i];
                nums[k++] = el;
            }else{
                
            }
        }
        return k;
    }
};