class Solution {
public:
   long long minimalKSum(vector<int>& nums, int k) {
        set<int>s;
        long long sum=0;
        int start=1;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(auto itr=s.begin();itr!=s.end();itr++)
        {
            long long l=start;
            long long r=*itr;
            if(k>(r-l))
            {
                k-=(r-l);
            }
            else
            {
                break;
            }
            sum+=((r-1)*r)/2-((l)*(l-1))/2;
            start=r+1;
        }
        long long l=start;
        long long r=start+k;
        sum+=((r-1)*r)/2-((l)*(l-1))/2;
        return sum;
    }
};