class Solution {
public:
    
    int n;
    int t[1001][1001];
    
    bool isPred(string& curr, string& prev){
        
        int M = prev.length();
        int N = curr.length();
        
        if(M >= N || N-M!=1){
            return false;
        }
        
        int s=0,t=0;
        while(s<M && t<N){
            if(prev[s]==curr[t]){
                s++;
            }
            t++;
        }
        return s==M;
    }
    
    static bool func(string& word1, string& word2){
        return word1.length() < word2.length();
    }
    
    int solve(vector<string>& words, int i , int p){
        if(i==n) return 0;
        
        if(p!=-1 && t[i][p]!=-1){
            return t[i][p];        
        }
        
        int take = 0;
        if(p==-1 || isPred(words[i],words[p])){                 //issue
            take = 1 + solve(words, i+1, i);
        }
        int skip = solve(words, i+1, p);
        
        if(p!=-1){
            t[i][p] = max(take,skip);                           //issue
        }
        
        return max(take, skip);
    }
    
    int longestStrChain(vector<string>& words) {
        memset(t, -1, sizeof(t));
        n = words.size();
        sort(begin(words), end(words), func);
        return solve(words, 0, -1);
    }
};