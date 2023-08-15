class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int first = lower_bound(nums.begin(), nums.end(),target) - nums.begin();
        if(first < nums.size() && nums[first]==target){
             res.push_back(first);
            int last = upper_bound(nums.begin(), nums.end(),target) - nums.begin() - 1;
            res.push_back(last);
        }
        else {
            res.push_back(-1);
            res.push_back(-1);

        }
        return res;
    }
};