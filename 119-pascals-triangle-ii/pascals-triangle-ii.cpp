class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int row = 0;
        vector<vector<int>>ans;
        while(row <= rowIndex){
            vector<int>elements(row + 1, 1 );
            for(int i = 1; i < row; i++){
                elements[i] = ans[row - 1][i - 1] + ans[row - 1][i]; 
            }
            ans.push_back(elements);
            row++;
        }
        return ans[rowIndex];
    }
};