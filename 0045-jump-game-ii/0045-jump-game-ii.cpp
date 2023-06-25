class Solution {
public:
    int jump(vector<int>& arr) {
        int n = arr.size();
        int maxReach = arr[0];
        int stepsLeft = arr[0];
        int jumps = 1;
        
        if(n<=1) return 0;
        else if(arr[0]==0) return -1;
        
        int i=1;
        while(i<n){
            if(i==n-1) return jumps;
            maxReach = max(maxReach, i+arr[i]);
            stepsLeft--;
            
            if(stepsLeft==0){
                jumps++;
                if(maxReach==i){
                    return -1;
                }
                stepsLeft=maxReach-i;
            }
            i++;
        }
        return jumps;
    }
};