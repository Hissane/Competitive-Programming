class Solution {
public:
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            map<char, int> map;
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.' && map[board[i][j]]){
                    return false;
                }else{
                    map[board[i][j]]++;
                }
            }
        }
        for(int j = 0; j < 9; j++){
            map<char, int> map;
            for(int i = 0; i < 9; i++){
                if(board[i][j] != '.' && map[board[i][j]]){
                    return false;
                }else{
                    map[board[i][j]]++;
                }
            }
        }
        for(int i = 0; i < 9; i++){
            map<char, int> map;
            for(int j = 0; j < 9; j++){
                if(board[i][i+j] != '.' && map[board[i][j]]){
                    return false;
                }else{
                    map[board[i][j]]++;
                }
            }
        }
    }
};