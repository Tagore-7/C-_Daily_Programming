class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, vector<int>>items;
        for(auto it: items1){
            items[it[0]].push_back(it[1]);
        }
        for(auto it: items2){
            items[it[0]].push_back(it[1]);
        }
        vector<vector<int>>wts;
        for(auto it:items){
            vector<int>temp;
            temp.push_back(it.first);
            int tempsum  = 0;
            for(auto sum: it.second) tempsum +=sum;
            temp.push_back(tempsum);
            wts.push_back(temp);
        }
        return wts;
    }
};
