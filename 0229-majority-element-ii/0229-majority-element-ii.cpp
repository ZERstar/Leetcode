class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = -1;
        int c2 = -1;
        int cnt1 =0;
        int cnt2 =0;
        vector<int>ans;
        for(int num:nums){
            if(num==c1) cnt1++;
            else if(num==c2) cnt2++;
            else if(cnt1==0) {c1=num; cnt1=1;}
            else if(cnt2==0) {c2=num; cnt2=1;}
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=cnt2=0;
        for(int num:nums){
            if(num==c1) cnt1++;
            else if(num==c2) cnt2++;
        }
        if(cnt1 > nums.size()/3) ans.push_back(c1);
        if(cnt2 > nums.size()/3) ans.push_back(c2);

        return ans;
    }
};