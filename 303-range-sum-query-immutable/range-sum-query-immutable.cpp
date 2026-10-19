class NumArray {
public:
    vector<int>p_sum;
    NumArray(vector<int>& nums) {
    // int sum = nums[0];
        for(int i = 1; i<nums.size(); i++)
            nums[i] = nums[i-1] + nums[i];  
        p_sum = nums;
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return p_sum[right]; 
        else
            return p_sum[right] - p_sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */