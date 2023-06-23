class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num&1) return false;
        int sum=0;
        
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0) sum += num/i + i;
        }
        // cout<<sum;
        if(sum/2 == num) return true;
        else return false;
    }
};