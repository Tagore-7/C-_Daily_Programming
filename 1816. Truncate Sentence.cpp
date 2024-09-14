class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        string word;
        stringstream iss(s);
        int space = 0;
        while(iss >> word && space < k){
            ans += word ;
            space++;
            if( space < k){
                 ans += " ";
            }
        }
           
        
        return ans;
    }
};
