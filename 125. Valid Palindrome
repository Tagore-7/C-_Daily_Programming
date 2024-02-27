class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(auto ch: s){
            if(std::isalnum(ch)){
                ch = tolower(ch);
                ans += ch;
            }
        }
        string ans2 = ans;
        reverse(ans2.begin(), ans2.end());
        if(ans == ans2) return true;
        return false;
    }
};
