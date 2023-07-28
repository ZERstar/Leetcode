class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(hash.count(complement)){
                ans.push_back(hash[complement]);
                ans.push_back(i);
                break;
            }
            hash[nums[i]] = i;
        }
        return ans;
    }
};