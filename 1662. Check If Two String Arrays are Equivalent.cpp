class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool ans = true;
        string str1;
        string str2;
        for(auto i : word1){
           str1 += i;
        }
        for(auto j : word2){
            str2 += j;
        }
        if (str1 == str2){
            ans = true;
        }else{
            ans = false;
        }
        return ans;
    }
};
