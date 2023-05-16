class Solution {
public:
    int reverse(int x) {
        long long rev =0 ;
        int sign = (x < 0) ? -1 : 1;
        x = abs(x);
        while(x != 0){
            int ld = x % 10;
            int newRev = rev * 10 + ld;
            if((newRev - ld)/10 != rev) return 0;
            rev = newRev;
            x /= 10;
        }
        return rev * sign;
    }
};