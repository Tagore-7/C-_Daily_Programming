class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> ans;
        vector<string> name;
        for(int i = 0; i < names.size(); i++){
            ans[heights[i]] = names[i];
        }
        for( auto i = ans.rbegin(); i != ans.rend(); i++){
            name.push_back(i -> second);
        }
        return name;
    }
};
