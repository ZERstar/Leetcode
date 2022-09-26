class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x>=2147483647){
            return false;
        }
        long int num=0;
        int rev = x;
            while(x>0){
                num=num*10;
                num=num+(x%10);
                x=x/10;
            }
            if(rev==num){
                return true;
            }
            else{
                return false;
            }
        }
};