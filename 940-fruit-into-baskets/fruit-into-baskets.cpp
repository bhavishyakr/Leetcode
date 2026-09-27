class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, r = 0, max_len = 0;
        unordered_map<int , int>m;
        while(r < fruits.size()){
            m[fruits[r]]++;
            while(m.size() > 2){
                m[fruits[l]]--; 
                if(m[fruits[l]] == 0)
                    m.erase(fruits[l]);
                l++;
            }
            max_len = max(max_len , r-l+1);
            r++;
        }
    return max_len;
        
    }
};