class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>arrMap;
        unordered_set<int> arrSet;
        for(auto it: arr){
            arrMap[it]++;
        }
        for(auto it: arrMap){
           arrSet.insert(it.second);
        }
        return arrMap.size() == arrSet.size();
    }
};
