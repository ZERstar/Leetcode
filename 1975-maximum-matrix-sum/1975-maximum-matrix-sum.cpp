class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int cnt = 0;
        long long sum = 0;
        int mini = 1000000;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum += abs(a[i][j]);
                mini = min(mini , abs(a[i][j]));
                if(a[i][j]<0) cnt++;
            }
        }
        if(cnt % 2 ==0) return sum;
        return sum - 2 * mini;
    }
};