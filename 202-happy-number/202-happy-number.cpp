class Solution {
public:
    int convert(int n){
        int total =0;
        while(n){
            int last = n%10;
            total = total + (last*last);
            n=n/10;
        }
        return total;
    }
    bool isHappy(int n) {
        if(n==1) return true;
        int ok =0 ;
        int iterate = 0;
        while(n!=0 && iterate<=20000){
            n=convert(n);
            if(n==1) ok=1;
            iterate++;
        }
        return (ok?true:false);
    }
};