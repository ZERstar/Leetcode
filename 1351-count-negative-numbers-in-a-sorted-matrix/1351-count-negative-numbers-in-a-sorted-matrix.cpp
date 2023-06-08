class Solution {
public:
    int countNegatives(vector<vector<int>>& matrix) {
        int count = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] < 0) count++;
            }
        }
        return count;
    }
};