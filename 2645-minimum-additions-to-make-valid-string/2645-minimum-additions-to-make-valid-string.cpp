class Solution {
public:
    int addMinimum(string word) {
        int count=0;
        if(word[0]!='a'){
            word = "a" + word;
            count++;
        }
        int n = word.size();
        for(int i=0;i<n-1;i++){
            if(word[i]=='a'){
                if(word[i+1]=='a') count+=2;
                if(word[i+1]=='c') count+=1;
            }
            if(word[i]=='b'){
                if(word[i+1]=='b') count+=2;
                if(word[i+1]=='a') count+=1;
            }
            if(word[i]=='c'){
                if(word[i+1]=='c') count+=2;
                if(word[i+1]=='b') count+=1;
            }
        }
        if(word[n-1]=='a') count+=2;
        if(word[n-1]=='b') count+=1;
        return count;
    }
};