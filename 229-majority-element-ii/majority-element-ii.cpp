class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin() , nums.end());
        int freq = 0;
        int el = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el){
                freq+=1;
            }else{
            if(freq > (nums.size()/3 ) )
                temp.push_back(nums[i-1]);

                freq = 1;
                el = nums[i];
            }

        }
            if(freq > (nums.size()/3 ) )
                temp.push_back(nums.back());
        return temp;
    }
};