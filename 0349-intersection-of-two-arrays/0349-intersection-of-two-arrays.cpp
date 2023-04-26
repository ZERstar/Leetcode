class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mp(nums1.begin(),nums1.end());
        vector<int> res;
        for(auto i : nums2){
            if(mp.count(i)){
                res.push_back(i);
                mp.erase(i);
            }
        }
        return res;
    }
};