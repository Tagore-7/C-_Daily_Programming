class Solution {
public:
    vector<int>rowsVisit = {1,-1,0,0};
    vector<int>colsVisit = {0, 0,-1,1};
    int maxGold = 0;
    int dfs(vector<vector<int>>& grid, int x, int y, int rows, int cols){
        if(x < 0 || y < 0 || x >= rows || y >= cols || grid[x][y] == 0){
            return 0;
        }
        int current = grid[x][y];
        grid[x][y] = 0;
        int localMaxGold = current;
        for(int i = 0; i < 4; i++){
            int newX = x + rowsVisit[i];
            int newY = y + colsVisit[i];
            localMaxGold = max(localMaxGold, current + dfs(grid, newX, newY, rows, cols));
        }
        grid[x][y] = current;
        return localMaxGold;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j]!= 0){
                    maxGold = max(maxGold, dfs(grid, i, j, rows, cols));
                }
            }
        }
        return maxGold;
    }
};
