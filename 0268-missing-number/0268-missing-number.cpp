class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>freq(nums.begin(), nums.end());
        int miss=0;
        for(int i=0;i<=n;i++){
            if(freq.find(i)==freq.end()){
                miss=i;
                break;
            }
        }
        return miss;
    }
};