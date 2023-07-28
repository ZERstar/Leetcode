class Solution {
public:
    int cnt=0;
    
    void merge(int l, int mid, int r, vector<int>&arr){
        
        int j = mid+1;
        for(int i=l;i<=mid;i++){
            while(j<=r && arr[i] > 2LL * arr[j]){
                j++;
            }
            cnt+=j-(mid+1);
        }
        
        vector<int> tmp;
        int left = l, right= mid+1;
        while(left<=mid && right<=r){
            if(arr[left] <= arr[right]){
                tmp.push_back(arr[left++]);
            }
            else{
                tmp.push_back(arr[right++]);
            }
        }

        while(left<=mid){
            tmp.push_back(arr[left++]);
        }
        while(right<=r){
            tmp.push_back(arr[right++]);
        }
        for(int i=l;i<=r;i++){
            arr[i]=tmp[i-l];
        }
    }
    
    
    void mergeSort(int l, int r ,vector<int>&arr){
        if(l==r) return;
        int mid = (l+r)/2;
        mergeSort(l,mid,arr);
        mergeSort(mid+1, r,arr);
        merge(l,mid,r,arr);
    }
    
    int reversePairs(vector<int>& nums) {
        mergeSort(0, nums.size()-1, nums);
        return cnt;
    }
};

