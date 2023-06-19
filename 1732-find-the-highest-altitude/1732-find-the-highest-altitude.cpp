class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int h = 0;
        int ch = 0;
        
        for(int i=0;i<gain.size();i++){
            ch += gain[i];
            
            if(ch > h)
                h = ch;
        }
        return h;
    }
};