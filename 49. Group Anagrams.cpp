class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>stringMap;
        for(auto it: strs){
            auto temp = it;
            sort(temp.begin(), temp.end());
            stringMap[temp].push_back(it);
        }
        vector<vector<string>>solution;
        for(auto [key, value] : stringMap){
            vector<string>temp;
            for(auto allStrings: value){
               temp.push_back(allStrings);
            }
             solution.push_back(temp);
        }
        return solution;
    }
};
