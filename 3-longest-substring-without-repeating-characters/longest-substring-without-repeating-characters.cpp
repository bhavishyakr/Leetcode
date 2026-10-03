class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int max_len = 0;
        unordered_map<char , int>hash;

        while(r < s.size()){
            if(hash.find(s[r]) != hash.end()){
                if(l <= hash[s[r]])
                    l = hash[s[r]] + 1;
            }
            hash[s[r]] = r;
            max_len = max(max_len , r - l + 1);
            r++;
        }
        return max_len;
    }
};