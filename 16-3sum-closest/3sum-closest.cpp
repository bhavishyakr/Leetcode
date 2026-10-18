class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int result = nums[0] + nums[1] + nums[2];
    for(int i = 0 ; i<nums.size()-2; i++){
        int st = i+1;
        int end = nums.size()-1;
        while(st<end){
            int sum = nums[i] + nums[st] + nums[end];
            if(abs(target - sum) < abs(target - result)){
                result = sum;
            }
            if(target == sum) return sum;
            if(sum < target) st++;
            else end--;
        }
    }

    return result;
    }
};