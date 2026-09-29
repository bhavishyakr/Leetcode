/*class Solution {
public:
    vector<int> freq(string s){
        vector<int> frq(26,0);
        for(int i=0 ; i<s.size();i++){
            frq[s[i] - 'a']++;
        }
        return frq;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> a = freq(s1);

        int windsz = s1.size();
        for(int i = 0; i < s2.size(); i++){
            int wind = 0;
            int idx = i;
            vector<int>freq(26,0);
            while(idx<s2.size() && wind < windsz  ){
                freq[s2[idx] - 'a']++;  
                idx++;
                wind++;
            }
            for(int val:a){
                cout<<val<<" ";
            }
            cout<<endl;
            for(int val:freq)
                cout<<val<<" ";
            for(int i=0 ; i<26; i++){
                if(a[i] != freq[i])
                    continue;
                else
                    return true;
            }
        }


        return false;
    }
};
*/
class Solution {
public:

    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        vector<int> a(26, 0);
        vector<int> window(26, 0);

        // Frequency of s1
        for(char c : s1)
            a[c - 'a']++;

        int k = s1.size();

        // First window
        for(int i = 0; i < k; i++)
            window[s2[i] - 'a']++;

        // Check first window
        if(a == window)
            return true;

        // Slide the window
        for(int r = k; r < s2.size(); r++) {

            // Add new character
            window[s2[r] - 'a']++;

            // Remove old character
            window[s2[r - k] - 'a']--;

            if(a == window)
                return true;
        }

        return false;
    }
};