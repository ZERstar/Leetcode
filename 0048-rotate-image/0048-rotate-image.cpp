class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        int rows = matrix.size();
         for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j] ,matrix[j][i]);
                
            }
        }

    }
};