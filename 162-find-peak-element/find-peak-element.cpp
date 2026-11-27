class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
    
        while(s <= e){
            int mid = s + (e-s)/2; 
            //at edges
            if(nums.size() == 1) return 0;
            if(mid == 0 && nums[mid] > nums[mid+1]) return mid;
            if(mid == e && nums[mid] > nums[mid-1]) return mid;


            if(mid + 1 <= e && mid - 1 >= 0 && nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])  return mid;
            else if(mid + 1 <= e && nums[mid] < nums[mid+1]) {
                s = mid + 1;
                continue;
            }
            else if(mid - 1 >= 0 && nums[mid] < nums[mid-1]){
                e = mid - 1;
            }
        }
        return 0;
    }
};