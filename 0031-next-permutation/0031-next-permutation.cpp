class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gi = -1;
        
        for(int i=n-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                gi = i-1;
                break;
            }
        }
        
        if(gi != -1){
            int si = gi;
            for(int j=n-1;j>=gi;j--){
                if(nums[j] > nums[gi]){
                    si = j;
                    break;
                }
            }
            swap(nums[gi], nums[si]);
        }
        reverse(nums.begin() + gi + 1, nums.end());
    }
};