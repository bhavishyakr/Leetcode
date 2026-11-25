class Solution {
public:
    int value(int row , int col , vector<vector<int>>&ans){
        int sum;
        sum = ans[row][col-1] + ans[row][col];
        return sum;
    }
    vector<vector<int>> generate(int numRows) {
        int row = 0;
        vector<vector<int>>ans;
        while(row < numRows){
            vector<int>elements;
            for(int i = 0; i < row + 1; i++){
                if(i == 0){
                    elements.push_back(1);
                    continue;
                }
                if(i == row){
                    elements.push_back(1);
                    continue;
                }
                int num = value(row - 1 , i , ans);
                elements.push_back(num);
            }
                ans.push_back(elements);
                row++;
        }
        return ans;
    }
};