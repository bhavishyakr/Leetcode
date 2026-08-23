class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int largest = 0;
        for(int el : candies){
            largest = max(largest, el);
        }
        vector<bool>result(candies.size());
        for(int i=0; i<candies.size();i++){
            if(candies[i] + extraCandies >= largest)
                result[i] = true;
            else
                result[i] = false;
        };
    return result;
    }
};