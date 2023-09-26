class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.length();
        vector<bool> taken(26, false);
        vector<int> lastIndex(26);
        string result;
        
        for(int i=0;i<n;i++){
            char ch = s[i];
            lastIndex[ch - 'a'] = i;
        }
        for(int i=0;i<n;i++){
            char ch = s[i];
            int idx = ch - 'a';
            if(taken[idx]== true){
                continue;
            }
            while(result.length() > 0 && s[i] < result.back() && lastIndex[result.back() - 'a'] > i){
                taken[result.back() - 'a'] = false;
                result.pop_back();
            }
            result.push_back(s[i]);
            taken[idx] = true;
        }
        return result;
    }
};