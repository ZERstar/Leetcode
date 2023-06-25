class Solution {
public:
    bool isPalindrome(string s) {
        string modifiedString;
        for(char c : s){
            if (isalnum(c)) {
                modifiedString += tolower(c);
            }
        }
        int n = modifiedString.size();
        for (int i = 0; i < n / 2; i++) {
            if (modifiedString[i] != modifiedString[n - i - 1]) {
                return false; 
            }
        }
        return true;
    }
};