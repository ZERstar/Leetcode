class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        int g_index = -1;
        
        for(int i=n-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                g_index = i-1;
                break;
            }
        }
        if(g_index != -1){
            int s_index = g_index;
            
            for(int j = n-1;j>=g_index;j--){
                if(nums[j] > nums[g_index]){
                    s_index = j;
                    break;
                }
            }
            swap(nums[g_index], nums[s_index]);
        }
        reverse(nums.begin() + g_index + 1, nums.end());
    }
};