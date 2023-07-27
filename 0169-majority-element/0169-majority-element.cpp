class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = nums[0];
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==c) cnt++;
            else{
                cnt--;
                if(cnt==0){
                    c=nums[i];
                    cnt=1;
                }
            }
        }
        cnt=0;
        for(int num : nums){
            if(num == c) cnt++;
        }
        if(cnt > nums.size()/2) return c;
        else return -1;
    }
};