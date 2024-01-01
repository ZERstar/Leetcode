class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(auto nums:nums1){
            res.push_back(nums);
        }
        for(auto nums:nums2){
            res.push_back(nums);
        }
        sort(begin(res),end(res));
        int n = res.size();
        return n%2 ? res[n/2] : (res[n/2 - 1] + res[n/2])/2.0;
    }
};