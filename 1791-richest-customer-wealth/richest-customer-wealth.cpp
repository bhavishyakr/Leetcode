class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum =0;
        for(vector sec : accounts){
            int sum = 0;
            for(int element : sec){
                sum += element;
                max_sum = max(sum,max_sum);
            }
        }
        return max_sum;
    }
};