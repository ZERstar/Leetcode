class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        for(int i=0;i<=n;i++){
            if(i==n or s[i]==' '){
                reverse(s.begin()+start, s.begin() + i);
                start = i + 1;
            }
        }
        return s;
    }
};