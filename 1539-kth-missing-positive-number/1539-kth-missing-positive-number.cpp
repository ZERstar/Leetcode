class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k) return k;
        int low=0;
        int high=arr.size()-1;
        int closemid=0;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]-(mid+1)<k){
                closemid = mid+1;
                low=mid+1;
            }
            else{
                {
                    high=mid-1;
                }
            }
        }
        return k+closemid;
    }
};