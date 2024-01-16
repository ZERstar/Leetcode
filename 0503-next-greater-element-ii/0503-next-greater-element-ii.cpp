class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> a=nums;
        for(int i=0;i<nums.size();i++){
            a.push_back(a[i]);
        }
        int n=nums.size();
        vector<int> nge(n,-1);
        stack<int>x;
        for(int i=0;i<2*n;i++){
            while(!x.empty() and a[x.top()] < a[i]){
                int idx = x.top();
                x.pop();
                if(idx < n){
                    nge[idx]=a[i];
                }
            }
            x.push(i);
        }
        return nge;
    }
};