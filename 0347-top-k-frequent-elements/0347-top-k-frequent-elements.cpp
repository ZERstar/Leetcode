class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num: nums) {
            freq[num]++;
        }
        vector<pair<int, int>> freqList(freq.begin(), freq.end());
        sort(freqList.begin(), freqList.end(), [](pair<int, int> p1, pair<int, int> p2) {
            return p1.second > p2.second;
        });
        vector<int> res;
        for(int i = 0; i < k; i++) {
            res.push_back(freqList[i].first);
        }
        return res;
    }
};