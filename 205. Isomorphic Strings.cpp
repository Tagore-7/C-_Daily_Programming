class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>ans;
        unordered_map<char, char> ans1;
        for(int i = 0; i < s.size(); i++){
            if(ans.find(s[i]) != ans.end()){
                if(ans[s[i]] != t[i]) return false;
            }
            else{
            ans[s[i]] = t[i];
            }
            if(ans1.find(t[i]) != ans1.end()){
                if(ans1[t[i]] != s[i]) return false;
            }
            else{
            ans1[t[i]] = s[i];
            }
        }
        return true;
      
    }
};
