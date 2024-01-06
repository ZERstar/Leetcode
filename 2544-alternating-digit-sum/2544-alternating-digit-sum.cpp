class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        vector<int>v;
        while(n>0){
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i%2==0){
                ans+=v[i];
            }
            else{
                ans-=v[i];
            }
        }
        return ans;
    }
};