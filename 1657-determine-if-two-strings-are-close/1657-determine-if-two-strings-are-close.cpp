class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> count1(26,0), count2(26,0);
        set<int> s1, s2;
        
        for(auto x: word1){
            count1[x-'a']++;
            s1.insert(x);
        }
        for(auto x: word2){
            count2[x-'a']++;
            s2.insert(x);
        }
        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());
        return s1==s2 && count1==count2;
    }
};