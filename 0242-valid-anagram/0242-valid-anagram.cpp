class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        vector<int> count(128,0);
        
        for(char c : s){
            count[c]++;
        }
        
        for(char c : t){
            count[c]--;
            if(count[c] < 0) return false;
        }
        return true;
    }
};