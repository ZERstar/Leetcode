class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int i = 0, j = 0;
        int n = arr.size();
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<n;i++){
            while(!dq.empty() && dq.front() <=i-k)
                dq.pop_front();
            while (!dq.empty() && arr[dq.back()] < arr[i])
                dq.pop_back();
            dq.push_back(i);
            if (i >= k - 1)
                ans.push_back(arr[dq.front()]);
            }
        return ans;
    }

};