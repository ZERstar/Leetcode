class Solution {
public:
    int trap(vector<int>& arr) {
        int water = 0;
        int n = arr.size();
        int left[n];
        int right[n];
        left[0] = arr[0];
        
        for(int i=1;i<n;i++){
            if(arr[i] > left[i-1]) left[i] = arr[i];
            else left[i] = left[i-1];
        }
        
        right[n-1] = arr[n-1];
        
        for(int i=n-2; i>=0;i--){
            if(arr[i] > right[i+1]) right[i] = arr[i];
            else right[i] = right[i+1];
        }
        
        for(int i=1;i<n-1;i++){
            water += max(min(left[i],right[i]) - arr[i], 0); 
        }
        return water;
    }
};