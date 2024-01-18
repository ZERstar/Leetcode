class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>a;
        a.push_back(0);
        for(auto h : heights) a.push_back(h);
        a.push_back(0);
        
        stack<int>x;
        int n = a.size();
        vector<int>nle(n,0);
        vector<int>ple(n,0);
        
        for(int i=0;i<n;i++){
            while(!x.empty() and a[x.top()] > a[i]){
                int idx = x.top();
                x.pop();
                if(idx < n){
                    nle[idx] = i;
                }
            }
            x.push(i);
        }
        
        while(!x.empty()) x.pop();
        
        for(int i=n-1;i>=0;i--){
            while(!x.empty() and a[x.top()] > a[i]){
                int idx = x.top();
                x.pop();
                if(idx < n){
                    ple[idx] = i;
                }
            }
            x.push(i);
        }
        
        int ans = 0;
        
        for(int i=1;i<n-1;i++){
            ans = max(ans, (nle[i] - ple[i] - 1) * a[i]);
        }
        return ans;
    }
};