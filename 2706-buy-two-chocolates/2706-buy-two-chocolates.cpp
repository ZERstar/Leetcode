class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minLeft = INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                int left = prices[i] + prices[j];
                
                if(left < minLeft){
                    minLeft = left;
                }
            }
        }
        if (minLeft <= money) {
            return money - minLeft;
        } else {
            return money;
        }
    }
};