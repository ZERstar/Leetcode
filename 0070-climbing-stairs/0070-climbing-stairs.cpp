class Solution {
public:
    vector<int>t;
    int solve(int i){
        if(i<0) return 0;
        if(i==0) return 1;
        
        if(t[i]!=-1){
            return t[i];
        }
        
        int ones = solve(i-1);
        int twos = solve(i-2);
        
        return t[i] = ones + twos;
    }
    
    int climbStairs(int n) {
        t.assign(46,-1);
        return solve(n);
    }
};