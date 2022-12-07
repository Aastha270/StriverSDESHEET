// SET ZEROS MATRIX

//TIME COMPLEXITY:- O(N^2)
//SPACE COMPLEXITY:- 0(1)


/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //row
        int n = matrix[0].size();   //col
        vector <bool> row(m,false);
        vector<bool> col(n, false);

        for(int i= 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i] = true;      // cell where 0 is found row and col value is true
                    col[j] = true;
                }
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(row[i] == true || col[j] == true){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

*/