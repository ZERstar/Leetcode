class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int freq = 1,freq_cnt=0,freq_max = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) freq++;
            else{
                if(freq > freq_max){
                    freq_max = freq;
                    freq_cnt = 1;
                }
                else if(freq == freq_max){
                    freq_cnt++;
                }
                freq = 1;
            }
        }
        if(freq > freq_max){
            freq_max = freq;
            freq_cnt = 1;
        }
        else if(freq == freq_max){
            freq_cnt++;
        }
        return freq_cnt * freq_max;
    }
};