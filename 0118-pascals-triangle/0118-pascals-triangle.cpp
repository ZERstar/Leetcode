/*Initialize an empty 2D vector (triangle) to store the Pascal's Triangle
Add the first row with a single element 1 to the triangle

For each row from the second row to the desired number of rows:
    Initialize a new row vector with a single element 1
    For each element in the previous row (excluding the first and last element):
        Calculate the new element by adding the current element and the next element in the previous row
        Add the new element to the current row vector
    Add the last element 1 to the current row vector
    Add the current row vector to the triangle

Return the Pascal's Triangle (2D vector)
*/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> r(n);
        for(int i=0;i<n;i++){
            r[i].resize(i+1);
            r[i][0] = r[i][i]=1;
            for(int j=1;j<i;j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        
        return r;
    }
};