class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<int, vector<int>>rows;
        unordered_map<int, vector<int>>cols;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                rows[i].push_back(grid[i][j]);
                cols[j].push_back(grid[i][j]);
            }
        }
        int count = 0;
        for(auto [row, rowvalues]: rows){
            for(auto [col, colvalues]: cols){
                if(equal(rowvalues.begin(), rowvalues.end(), colvalues.begin())){
                    count++;
                }
            } 
        }
        return count;
    }
};
