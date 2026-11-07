class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;

        for (int x : nums) {
            total += x;
        }

        int target = total % p;

        if (target == 0) return 0;

        unordered_map<int, int> mp;
        mp[0] = -1;

        int prefix = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {

            prefix = (prefix + nums[i]) % p;

            int required = (prefix - target + p) % p;

            if (mp.count(required)) {
                ans = min(ans, i - mp[required]);
            }

            // Store the latest occurrence
            mp[prefix] = i;
        }

        return ans == nums.size() ? -1 : ans;
    }
};