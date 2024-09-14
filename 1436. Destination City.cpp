class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> ans;
        for(const auto &path : paths){
            ans[path[0]]++;
            ans[path[1]]--;
        }
        for(auto it = ans.begin(); it!= ans.end(); it++){
            if(it -> second == -1) return it ->first;
        }
        return "";
    }
};
