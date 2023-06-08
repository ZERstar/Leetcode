class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pcount  = 0;
        int ncount  = 0;
        vector<int> v(nums.begin(), nums.end());
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]<0) ncount++;
            if(v[i]>0) pcount++;
        }
        int count = max(pcount, ncount);
        return count;
    }
};