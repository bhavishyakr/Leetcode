class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        vector<int>ans(2,-1);
        // searching for first occurence
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                cout<<"mid"<<mid<<" ";
                ans[0] = mid;
                high = mid-1;
            }
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        //again searching for last occurence
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                cout<<"mid"<<mid<<" ";
                ans[1] = mid;
                low = mid+1;
            }
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return ans;
    }
};