class Solution {
public:

    int Ls(int idx , vector<int> nums){
        int sum = 0;
        for(int i=0 ; i<idx; i++)
            sum += nums[i];
        return sum;
    }
    int Rs(int idx , vector<int> nums){
        int sum =0;
        for(int i=idx+1 ; i<nums.size(); i++)
            sum += nums[i];
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        // cout<<"gdxgs0";
        for(int i=0 ; i<nums.size(); i++){
        cout<<Ls(i,nums)<<","<<Rs(i,nums)<<endl;
            if(Ls(i , nums) == Rs(i , nums))
                return i;
        }
        return -1;
    }
};