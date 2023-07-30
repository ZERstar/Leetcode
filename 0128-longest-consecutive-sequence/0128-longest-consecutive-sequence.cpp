class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ls = INT_MIN;
        int cnt=0;
        int l = 1;
        for(int i=0;i<n;i++){
            if(nums[i] - 1 == ls){
                cnt+=1;
                ls = nums[i];
            }
            else if(ls != nums[i]){
                cnt=1;
                ls = nums[i];
            }
            l = max(l,cnt);
        }
        return l;
    }
};