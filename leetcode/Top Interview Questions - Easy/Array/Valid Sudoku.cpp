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
        for(int i = 0; i < 9; i = i + 3){
            for(int j = 0; j < 9; j = j +3){
              map<char, int> map;
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        if(board[i+k][j+l] != '.' && map[board[i+k][j+l]]){
                            return false;
                        }else{
                            map[board[i+k][j+l]]++;
                        }
                    }
                }
            }
        }
        return true;
    }
};