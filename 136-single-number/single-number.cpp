class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
            int st = 0, end = nums.size()-1;
            while(st <= end){

                int mid = (st+end) / 2;

                if(nums.size() == 1)
                    return nums[0];
                if(mid == 0 && nums[mid] != nums[mid+1])
                    return nums[mid];
                if(mid == nums.size()-1 && nums[mid] != nums[mid-1])
                    return nums[mid];
                if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
                    return nums[mid];
                if( mid % 2 == 0 ){
                    if(nums[mid] == nums[mid-1]){ 
                    end = mid - 1;  
                    }else{
                        st = mid + 1;
                    }
                }else{  
                    if(nums[mid] == nums[mid-1])
                        st = mid + 1;
                    else
                        end = mid - 1;
                    }
                
            }
        
        return -1;
    }
};