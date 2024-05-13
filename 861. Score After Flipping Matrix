class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int num_rows = grid.size();
        int num_cols = grid[0].size();
        for(int i = 0; i < num_rows; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < num_cols; j++){
                  
                    grid[i][j] = 1 - grid[i][j];
                
                }
            }
        }
        int max_score = 0;
        for(int j = 0; j < num_cols; j++){
            int one_count = 0;
            for(int i = 0; i < num_rows; i++){
                one_count += grid[i][j];
            }
            if(one_count < (num_rows - one_count)){
                for(int k = 0; k < num_rows; k++){
                        grid[k][j] = 1 - grid[k][j];
                }
            }
        }
        for(int i = 0; i < num_rows; i++){
            for(int j =0; j < num_cols; j++){
                max_score += grid[i][j] << (num_cols - j - 1); 
            }
        }
        return max_score;
    }
};
