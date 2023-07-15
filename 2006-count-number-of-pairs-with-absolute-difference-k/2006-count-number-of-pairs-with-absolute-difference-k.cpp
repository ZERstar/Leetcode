class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        int hash[101] = {0};
        for(int num : nums){
            hash[num]++;
        }
        for(int i=k+1;i<=100;i++){
            ans += (hash[i] * hash[i-k]);
        }
        return ans;
    }
};