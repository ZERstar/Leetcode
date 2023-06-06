class Solution {
public:
    int minTimeToType(string word) {
        int tm = 0;
        char prev = 'a';
        for(auto ch : word){
            int mint = min(abs(ch - prev) , min(prev - 'a' + 'z' - ch + 1, 'z' - prev + ch - 'a' + 1));
            tm += 1 + mint;
            prev = ch;
        }
        return tm;
    }
};