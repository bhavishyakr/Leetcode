class Solution {
public:
    vector<int> find_st_end(vector<int>nums , int idx, int tar){
        int pre = idx , suff = idx;
        vector<int>ans;
        while(pre - 1 >= 0 && nums[pre-1] == tar)
            pre--;
        while(suff+1 < nums.size() && nums[suff+1] == tar)
            suff++;
        ans.push_back(pre);
        ans.push_back(suff);
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        vector<int>ans(2,-1);
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