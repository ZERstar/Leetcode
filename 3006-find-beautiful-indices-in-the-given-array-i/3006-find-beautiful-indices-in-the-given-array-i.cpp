class Solution {
public:
    void computeLPS(string pat, vector<int>&LPS, int m){
        int len = 0;
        LPS[0]=0;
        int i =1;
        while(i<m){
            if(pat[i] == pat[len]){
                len++;
                LPS[i] = len;
                i++;
            }else{
                if(len!=0){
                    len = LPS[len - 1];
                }else{
                    LPS[i]=0;
                    i++;
                }
            }
        }
    }
    
    
    vector<int> kmp(string pat, string txt){
        int n = txt.size();
        int m = pat.size();
        
        vector<int>LPS(m,0);
        computeLPS(pat,LPS,m);
        vector<int> result;
        
        int i =0;
        int j =0;
        while(i<n){
            if(txt[i] == pat[j]){
                i++;
                j++;
            }
            if(j==m){
                result.push_back(i-m);
                j = LPS[j-1];
            }else if(txt[i] != pat[j]){
                if(j!=0){
                    j = LPS[j-1];
                }else{
                    i++;
                }
            }
        }
        return result;
    }
    
    
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> i_ind = kmp(a,s);
        vector<int> j_ind = kmp(b,s);
        
        int n = s.length();
        vector<int> result;
        for(int &i : i_ind){
            int left_limit = max(0, i-k);
            int right_limit = min(n-1,i+k);
            
            auto it = lower_bound(begin(j_ind), end(j_ind), left_limit);
            
            if(it!=j_ind.end() && *it<=right_limit){
                result.push_back(i);
            }
        }
        return result;
    }
};