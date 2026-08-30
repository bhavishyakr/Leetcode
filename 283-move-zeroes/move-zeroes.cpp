class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0 , p = 0;
        while(p < nums.size() && i < nums.size()){
            while(p < nums.size() && nums[p] == 0){
                p++;
            }
            if(p < nums.size()){
                cout<<i<<" "<<p<<endl;
                swap(nums[i++] , nums[p++]);  
            }
        }
        // while(i<nums.size())
        //     nums[i]=0;
    }
};