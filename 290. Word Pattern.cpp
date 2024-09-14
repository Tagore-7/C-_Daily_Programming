class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> pt;
        unordered_map<string, int> st;
        istringstream ss(s);
        string word;
        int i = 0;
        int n = pattern.size();
        for(word; ss >> word; i++){
            if( i == n || pt[pattern[i]] != st[word]) return false;
            pt[pattern[i]] = st[word] = i + 1;
        }
        return i == n;
    }
};
