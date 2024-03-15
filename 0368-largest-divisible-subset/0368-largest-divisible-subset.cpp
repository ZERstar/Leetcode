class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        
        vector<int>t(n,1);
        vector<int> prev_idx(n,-1);
        
        int last = 0;
        int maxL = 0;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] % nums[j]==0){
                    if(t[i] < t[j] + 1){
                        t[i] = t[j] + 1;
                        prev_idx[i] = j;
                    }
                    if(t[i] > maxL){
                        maxL = t[i];
                        last = i;
                    }
                }
            }
        }
        vector<int> result;
        while(last!=-1){
            result.push_back(nums[last]);
            last = prev_idx[last];
            
        }
        return result;
    }
};