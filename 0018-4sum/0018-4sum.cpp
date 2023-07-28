class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long>s;
                for(int k=j+1;k<n;k++){
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long f = target - sum;
                    if(s.count(f)){
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)(f)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    s.insert(nums[k]);
                }
            }
        }
         vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};