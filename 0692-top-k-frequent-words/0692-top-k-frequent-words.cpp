class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for(auto w : words){
            freq[w]++;
        }

        auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        };

        priority_queue<pair<string,int>, vector<pair<string,int>>, decltype(comp)> pq(comp); 
        for(auto w : freq ){
            pq.emplace(w.first, w.second);
            if(pq.size()>k) pq.pop();
        }

        vector<string> res;
        while(!pq.empty()){
            res.insert(res.begin(), pq.top().first);
            pq.pop();
        }
        return res;
    }
};