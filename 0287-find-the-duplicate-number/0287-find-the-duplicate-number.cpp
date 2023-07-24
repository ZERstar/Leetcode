class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        for(auto entry : mp){
            if(entry.second > 1) return entry.first;
        }
        return -1;
    }
};