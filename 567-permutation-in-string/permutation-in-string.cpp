class Solution {
public:
    bool freq_check(vector<int>freq1 ,vector<int> freq2){
        for(int i=0 ; i<26; i++){
                if(freq1[i] != freq2[i])
                    return false;
            }
            return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        vector<int> freq_s1(26,0);
        for(int i=0 ; i<s1.size();i++)
            freq_s1[s1[i] - 'a']++;

        int windsz = s1.size();
        for(int i = 0; i < s2.size(); i++){
            int wind = 0;
            int idx = i;
            vector<int>freq_s2(26,0);
            while(idx<s2.size() && wind < windsz  ){
                freq_s2[s2[idx] - 'a']++;  
                idx++;
                wind++;
            }
            if(freq_check(freq_s1, freq_s2))
                return true;
            
        }


        return false;
    }
};