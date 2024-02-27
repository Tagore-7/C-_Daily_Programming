class Solution {
public:
    string reverseWords(string s) {
        string ans;
        vector<string>temp;
        istringstream iss(s);
           string word;
        while(iss >> word){
            temp.push_back(word);
        }
        reverse(temp.begin(), temp.end());
        for(int i = 0; i < temp.size() ; i ++){
            ans += temp[i];
            if(i != temp.size() - 1){
                ans += " ";
            }
        }
        return ans;
    }
};
