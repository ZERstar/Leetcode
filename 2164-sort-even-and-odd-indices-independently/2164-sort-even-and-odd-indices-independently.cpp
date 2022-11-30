class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector <int> even , odd;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i%2) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        int eveni=0,oddj=0;
        int i=0;
        while(eveni < even.size() || oddj < odd.size()){
            if(eveni < even.size()){
                nums[i] = even[eveni];
                eveni++;
                i++;
            }
            if(oddj < odd.size()){
                nums[i] = odd[oddj];
                oddj++;
                i++;
            }
        }
     return nums;
    }
};