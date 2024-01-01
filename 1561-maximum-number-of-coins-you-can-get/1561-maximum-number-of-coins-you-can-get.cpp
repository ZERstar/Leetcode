class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(begin(piles), end(piles));
        int n = piles.size();
        int b = 0;
        int m = n-2;
        int result =0;
        while(m > b){
            result+=piles[m];
            b++;
            m-=2;
        }
        return result;
    }
};