class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        // if(nums.size() < 3) return 0;  
        sort(nums.begin() , nums.end());
        int i,j,cnt =0;
        int n = nums.size();
        for(i=0; i< n-2 ; i++){
            int k = i+2;
            for(int j = i+1;j<n-1 && nums[i]!=0;j++){
                while(k < n && nums[i]+nums[j] > nums[k])
                    k++;
                cnt += k - 1 -j;
            }
        }
        return cnt;
    }
};