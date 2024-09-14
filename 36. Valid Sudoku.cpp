class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int>rows[9];
        unordered_map<char, int>cols[9];
        unordered_map<char, int> matrix[9];
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                char num = board[i][j];
                if(num != '.') {
                    if(rows[i].count(num)){
                        return false;
                    }
                    rows[i][num] = 1;

                    if(cols[j].count(num)){
                        return false;
                    }
                    cols[j][num] = 1;
                    int boundIndex = (i / 3) * 3 + ( j / 3);
                    if(matrix[boundIndex].count(num)) {
                        return false;
                    }
                    matrix[boundIndex][num] = 1;
                }
            }
        }
        return true;
    }
};
