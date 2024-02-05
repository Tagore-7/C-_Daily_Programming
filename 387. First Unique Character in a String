class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>ans;
        queue<char> first;
        for(char c: s){
            ans[c]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(ans[s[i]] == 1) return i;
        }
       return -1;
    }
};
