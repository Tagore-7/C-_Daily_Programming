class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = 0;
        for(int i =0; i < word.size(); i++){
            if(word[i] == ch){
                pos = i;
                break;
            }
        }
        stack<char>chars;
        for(int i = 0; i <= pos; i++){
            chars.push(word[i]);
        }
        string ans = "";
        while(!chars.empty()){
            ans += chars.top();
            chars.pop();
        }

        for(int i  = pos + 1; i < word.size(); i++){
            ans += word[i];
        }
        return ans;
    }
};
