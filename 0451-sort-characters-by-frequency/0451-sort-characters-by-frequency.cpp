class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> counter;
        
        for(char c : s){
            counter[c]++;
        }
        
       
        vector<string> buckets(s.size()+1);
        
        for(auto it = counter.begin(); it != counter.end(); it++){
            buckets[it->second] += string(it->second, it->first);
        }
        
        string ans;
        for(int i = buckets.size()-1; i >= 0; i--){
            if(buckets[i] != ""){
                ans += buckets[i];
            }
        }
        
        return ans;
    }
};
