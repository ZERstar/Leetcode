class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int maxUnsat = 0;
        int currUnsat = 0;
        for(int i=0;i<minutes;i++){
            currUnsat += customers[i] * grumpy[i];
        }
        maxUnsat = currUnsat;
        
        int i=0;
        int j=minutes;
        while(j<n){
            currUnsat += customers[j] * grumpy[j];
            currUnsat -= customers[i] * grumpy[i];
            
            maxUnsat = max(maxUnsat, currUnsat);
            
            // j++;
            i++;
            j++;
        }
        int totalSat = maxUnsat;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                totalSat += customers[i];
            }
        }
        return totalSat;
    }
};