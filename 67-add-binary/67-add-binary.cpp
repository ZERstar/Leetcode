class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans;
        int carry=0,n=a.length(),m=b.length();
        for(int i=0;i<max(n,m);i++){
        int f = i<n?a[i]-'0':0;
        int s = i<m?b[i]-'0':0;
        int curr=(f+s+carry)%2;
        carry=(f+s+carry)/2;
        ans.push_back('0'+curr);
    }
    if(carry)
        ans.push_back('0'+carry);
    reverse(ans.begin(),ans.end());
    return ans;
    }
};