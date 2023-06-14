class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi = nums[0];
        int count  = 1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] == candi) count++;
            else{
                count--;
                if(count==0){
                    candi = nums[i];
                    count = 1;
                }
            }
        }
        
        count = 0;
        for(int num : nums){
            if(num == candi) count++;
        }
        if(count > nums.size()/2) return candi;
        else return -1;
    }
};