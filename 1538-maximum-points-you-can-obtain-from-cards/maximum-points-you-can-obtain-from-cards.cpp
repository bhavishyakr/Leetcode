class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i = cardPoints.size()-k;
        int l = i;
        int r = cardPoints.size()-1;
        int sum = 0;
        for(i; i<cardPoints.size() ; i++){
            sum += cardPoints[i];
        }
        int maxsum = sum;
        for(int j=0; j<k; j++){
            sum += cardPoints[++r % cardPoints.size()];
            sum -= cardPoints[l++];
            maxsum = max(sum , maxsum);
        }
        
        return maxsum;
    }
};