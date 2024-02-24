class Solution {
public:
    int n;
    vector<int> t;
    int solve(vector<int>&nums, int i, const int& n){
        if(i>n) return 0;
        if(t[i]!=-1){ 
            return t[i];
        } 
        int steal = nums[i] + solve(nums, i+2, n);
        int skip = solve(nums, i+1, n);
        
        return t[i]=max(steal ,skip);
    }
    
    
    int rob(vector<int>& nums) {
        n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        
        t.assign(101,-1);
        int takez = solve(nums, 0, n-2); 
        
        t.assign(101,-1);
        int takeo = solve(nums, 1, n-1);
        
        
        
        return max(takez, takeo);
    }
};