class Solution {
public:
    
    int numDecodeOpt(string &s, int N){
        int a=0,b=1;
        for(int n=1;n<=N;n++){
            int count=0;
            if(s[n-1]!='0')
                count+=b;
            if(n>1 && stoi(s.substr(n-2,2))>=10 && stoi(s.substr(n-2,2))<=26)
                count+=a;
            a=b;
            b=count;
        }
        return b;
    }
    int numDecodings(string s) {
        int n=s.length();
        int ans=numDecodeOpt(s,n);
        return ans;
    }
};