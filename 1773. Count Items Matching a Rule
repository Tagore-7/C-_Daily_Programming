class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
       
        for(int i = 0; i < items.size(); i++){
            int j = 0;
            string key;
                string type = items[i][j];
                string color = items[i][j+1];
                string name = items[i][j+2];
                if(ruleKey == "type") key = type;
                if(ruleKey == "color") key = color;
                if(ruleKey == "name") key = name;
                if(key == ruleValue){
                    ans++;
                }
            
        }
        return ans;
    }
};
