class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin() , nums.end());
        int freq = 0;
        int el = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el){
                freq++;
            }else{
                freq = 1;
                el = nums[i];
            }
            if(freq > (nums.size()/3 ) )
                temp.push_back(nums[i]);

        }
        vector<int>ans;
        if(temp.size()>0){
            ans.push_back(temp[0]);
            for(int i=1; i<temp.size(); i++)
                if(temp[i] != temp[i-1]){
                    ans.push_back(temp[i]);
                }
        }
        return ans;
    }
};