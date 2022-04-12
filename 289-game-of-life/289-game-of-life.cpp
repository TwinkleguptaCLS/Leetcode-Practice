class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                int cnt= 0;
                for (int x = i-1; x <= i+1; x++){
                    for (int y = j-1; y <= j+1; y++){
                        if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size()
                           && (x != i || y != j) 
                           && (board[x][y] == 1 || board[x][y] == 2)){
                            cnt++;
                        }
                    }
                }
                if (board[i][j] == 0 && cnt == 3){
                    board[i][j] = 3;
                }
                if (board[i][j] == 1 && (cnt < 2 || cnt > 3)){
                    board[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] == 3){
                    board[i][j] = 1;
                }
                if (board[i][j] == 2){
                    board[i][j] = 0;
                }
            }
        }
    
    }
};