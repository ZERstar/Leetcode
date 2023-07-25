class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>n(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            n[nums[i]]++;
            if(n[nums[i]] > 1) return nums[i];
        }
        return 0;
    }
};