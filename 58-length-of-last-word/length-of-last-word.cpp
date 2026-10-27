class Solution {
public:
    int lengthOfLastWord(string s) {
        int r = s.size() - 1;
        int count = 0;
        while(r >= 0 && s[r] == 32)
            r--;
        while(r >= 0 && s[r] != 32){
            count++;
            cout<<s[r]<<' ';
            r--;
        }
        return count;
    }
};