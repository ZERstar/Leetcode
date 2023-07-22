class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>idx;
        vector<int>jdx;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    idx.push_back(i);
                    jdx.push_back(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(find(idx.begin(),idx.end(),i) != idx.end() || find(jdx.begin(),jdx.end(),j) != jdx.end()){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};