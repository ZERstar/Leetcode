class Solution {
public:
    bool possible(vector<int>& nums, int mid, int k) {
        long long int windowsum = 0, totalsum = 0;
        for(int i = 0; i < mid; ++i)
            windowsum += nums[i];
        
        totalsum = 1LL * nums[mid-1] * mid;
        
        if(totalsum - windowsum <= k)
            return true;
        
        int j = 0;
        for(int i = mid; i < nums.size(); ++i) {
            windowsum -= nums[j];
            windowsum += nums[i];
            totalsum = 1LL * nums[i] * mid;
            
            if(totalsum - windowsum <= k)
                return true;
            j++;
        }
        
        return false;
    }
    
    int maxFrequency(vector<int>& nums, int k) {
        int l = 1, h = nums.size(), ans = 0;
        sort(nums.begin(), nums.end());
        
        while(l <= h) {
            int mid = l + (h - l + 1) / 2;
            if(possible(nums, mid, k)) {
                ans = mid;
                l = mid + 1;
            } 
            else {
                h = mid - 1;
            }
        }
        
        return ans;
    }
};
