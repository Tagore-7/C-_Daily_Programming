class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int len1 = word1.size();
        int len2 = word2.size();
        int i = 0, j = 0;

        while( i < len1 && j < len2){
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }
        
        while(i < len1){
            ans += word1[i];
            i++;
        }

        while(j < len2){
            ans += word2[j];
            j++;
        }
        return ans;
    }
};
