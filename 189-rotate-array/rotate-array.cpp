class Solution {
public:
    void rotate(vector<int>& nums, int sz) {
        int k;
        if(sz == nums.size() || nums.size() == 1) 
            return;
        else if(sz > nums.size()){
            k = sz % nums.size();
        }else{
            k = sz;
        }
        vector<int> arr2;
        for(int i=0; i<nums.size()-k ; i++)
            arr2.push_back(nums[i]);  
        int rem = nums.size()-k;
        for(int j=0; j<k ; j++)
            nums[j] = nums[rem++];
        int i=0;
        for(int m=k ; m<nums.size(); m++) 
            nums[m] = arr2[i++]; 
        }
};