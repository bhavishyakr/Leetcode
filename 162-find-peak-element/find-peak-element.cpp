class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        // if(nums.size() == 2){
        //     if(nums[0]>nums[1])
        //         return 0;
        //     return 1;
        // }
        while(s <= e){
            int mid = s + (e-s)/2;
            if( ( mid+1 < nums.size() && nums[mid] > nums[mid+1]  ) && (  mid-1 >=0 && nums[mid-1] < nums[mid] )){
                return mid;
            }
            else if(mid == nums.size()-1 && mid-1 >= 0){
                if(nums[mid] > nums[mid-1])
                    return mid;
            }
            else if( mid+1 < nums.size() && nums[mid] < nums[mid+1] ){
                s = mid+1;
            }
            else{
                e = mid -1;
            }
            cout<<mid<<" ";
        }
        return 0;
    }
};