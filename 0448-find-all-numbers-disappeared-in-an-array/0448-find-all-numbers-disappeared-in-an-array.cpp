class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        unordered_set <int> mark;
    for(int &i : a)
        mark.insert(i);
    int N = a.size();
    vector <int> result;
    for(int i = 1 ; i <= N ; i++)
        if(mark.find(i) == mark.end())
            result.emplace_back(i);
    return result;
    }
};