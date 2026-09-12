class Solution {
public:
    int kadane(vector<int>& nums){
        int maxi = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            if(sum < nums[i])
                sum = nums[i];
            maxi = max(maxi , sum);
        
        if(sum<0)
            sum = 0;
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        int x = kadane(nums);
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            nums[i] *= -1;
        }
        for(int el : nums)
            cout<<el;
        cout<<endl;
        int y = kadane(nums);
        cout<<sum<<y<<endl;
        cout<<sum+y;
        if(sum+y == 0 )
            return x;
        return (max(x , sum+y));
    }
};