class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<pair<int, int>, int>>rottenOranges;
        vector<vector<int>>visitedOranges(rows, vector<int>(cols,0));
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 2){
                    rottenOranges.push({{i,j},0});
                }
            }
        }
        int totalTime = 0;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        while(!rottenOranges.empty()){
            int rowVal = rottenOranges.front().first.first;
            int colVal = rottenOranges.front().first.second; 
            int time = rottenOranges.front().second;
            rottenOranges.pop();
            for(int i =0; i < 4; i++){
                int nrow = rowVal + drow[i];
                int ncol = colVal + dcol[i];
                if(nrow >= 0 && nrow < rows && ncol >= 0 && ncol < cols  && grid[nrow][ncol] == 1 && visitedOranges[nrow][ncol] !=2){
                    rottenOranges.push({{nrow,ncol},time + 1});
                    visitedOranges[nrow][ncol] = 2;
                }
            }
            totalTime = time;
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(visitedOranges[i][j] != 2 && grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return totalTime;

    }
};
