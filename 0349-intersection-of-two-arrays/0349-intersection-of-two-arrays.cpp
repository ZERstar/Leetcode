class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>intersections;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]) 
                    intersections.insert(nums1[i]);
            }
        }
        return vector<int>(intersections.begin(),intersections.end());
    }
};