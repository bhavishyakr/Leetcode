// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         int p_sum = 0 ;
//         int s_sum = 0 ;
//         int ans = 0;
//         for(int i = 0 ; i < nums.size() ; i++){
//             if(nums[i] == 1) p_sum++;
//             else p_sum--;
//             if(p_sum == 0) ans = max(ans , i+1);
//         }
//         for(int i = nums.size()-1 ; i >= 0 ; i--){
//             if(nums[i] == 1) s_sum++;
//             else s_sum--;
//             if(s_sum == 0) {
//                 ans = max(ans , int(nums.size() - i));
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;

        mp[0] = -1;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                sum++;
            else
                sum--;

            if (mp.count(sum)) {
                ans = max(ans, i - mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }

        return ans;
    }
};