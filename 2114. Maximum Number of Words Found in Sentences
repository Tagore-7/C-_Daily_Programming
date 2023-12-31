class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int count = 1;
       vector<int>ans;
        for(int i = 0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count += 1;
                }
            }
            ans.push_back(count);
            count = 1;
        }
        return *max_element(ans.begin(),ans.end());
    }
};
