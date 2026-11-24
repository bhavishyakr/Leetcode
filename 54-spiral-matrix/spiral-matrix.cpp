class Solution {
public:
    void upper_row_right(int col_st , int col_end , int row_st, vector<vector<int>>matrix, vector<int>&ans){
        for(int i = col_st; i <= col_end; i++){
            cout<<matrix[row_st][i];
            ans.push_back(matrix[row_st][i]);
            // cout<<'r'<<row_st<<'c'<<i<<' ';
        }
    }

    void last_col_down(int row_st , int row_end ,int col_end ,vector<vector<int>> matrix , vector<int>&ans){
        for(int i = row_st; i <= row_end; i++){
            cout<<matrix[i][col_end];
            ans.push_back(matrix[i][col_end]);
        }
    }

    void last_row_left(int col_end ,int col_st ,int row_end ,vector<vector<int>> matrix, vector<int>&ans){
        for(int i = col_end; i >= col_st; i--){
            ans.push_back(matrix[row_end][i]);
        }
    }

    void first_col_up(int row_end ,int row_st ,int col_st ,vector<vector<int>> matrix, vector<int>&ans){
        for(int i = row_end; i >= row_st; i--){
            ans.push_back(matrix[i][col_st]);
        }
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();     //no. of rows
        int cols = matrix[0].size();  //no. of cols

        int row_st = 0;
        int row_end = rows - 1;
        int col_st = 0;
        int col_end = cols - 1;
        vector<int>ans;

        while(row_st <= row_end && col_st <= col_end){
        //1st traverse upper_row_right || col change , row same
        if(row_st <= row_end && col_st <= col_end){
            upper_row_right(col_st , col_end , row_st, matrix, ans);
            row_st++;
        }
        cout<<'c';
        //2nd traverse last_col_down || col_same , row change
        if(row_st <= row_end && col_st <= col_end){
        last_col_down(row_st , row_end , col_end , matrix, ans);
            col_end--;
        }
        cout<<'c';
        //3rd traverse last_row_left || col_change , row same
        if(row_st <= row_end && col_st <= col_end){
        last_row_left(col_end , col_st , row_end , matrix, ans);
            row_end--;
        }
        cout<<'c';
        //4th traverse first_col_up || col_same , row change
        if(row_st <= row_end && col_st <= col_end){
        first_col_up(row_end , row_st , col_st , matrix, ans);
            col_st++;
        }
        cout<<'c';
        }

        return ans;

    }
};