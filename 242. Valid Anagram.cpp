class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>ans;
        for(auto it:s){
            ans[it]++;
        }
        for(auto it: t){
            if(ans.find(it) == ans.end() || ans[it] == 0) return false;
            ans[it]--;
        }
        for(auto it:ans){
            if(it.second > 0) return false;
        }
       return true;
    }
};
