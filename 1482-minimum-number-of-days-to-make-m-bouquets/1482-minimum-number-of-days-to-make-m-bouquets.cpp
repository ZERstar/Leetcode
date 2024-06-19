class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=0,r=1e9;
        int mid = l + (r-l)/2;
        int ans = -1;
        while(l<=r){
            int con = 0,bou=0;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid){
                    con++;
                    if(con>=k){
                        bou++;
                        con=0;
                    }
                }
                else con = 0;
            }
            if(bou>=m){
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
            mid = l + (r-l)/2;
        }
        return ans;
        
    }
};