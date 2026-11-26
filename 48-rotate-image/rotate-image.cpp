class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sz = matrix.size();
        for(int i = 0; i < matrix.size() ; i++){
        reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i = 0 ; i < sz ; i++){
            for(int j = 0 ; j < sz - 1 - i ; j++){
                swap(matrix[i][j],matrix[sz - 1 - j][sz - 1 - i]);
            }
        }
    }
};