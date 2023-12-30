class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        vector<int> ans;
        for(int i = 0; i < accounts.size(); i++){
           for (int j = 0; j < accounts[i].size() ; j++){
                max += accounts[i][j];  
           }
           ans.push_back(max);
           max = 0;
        }
        max = *max_element(ans.begin(),ans.end());
        return max;
    }
};
