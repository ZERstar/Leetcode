class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>mpp;
        sort(changed.begin(),changed.end());
        for(int nums:changed){
            mpp[nums]++;
        }
        vector<int>ans;
        for(int i=0;i<changed.size();i++){
            if(mpp[changed[i]]==0) continue;
            mpp[changed[i]]--;
            if(mpp[2 * changed[i]]){
                ans.push_back(changed[i]);
                mpp[2 * changed[i]]--;
            }
            else{
                vector<int>mt;
                return mt;
            }
        }
        return ans;
    }
};