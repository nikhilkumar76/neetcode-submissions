class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for(int row = 0; row < board.size(); row++){
            unordered_set<char> s;
            for(int i=0; i<n; i++){
                if(board[row][i] == '.') continue;
                if(s.count(board[row][i])) return false;
                s.insert(board[row][i]);
            }
        }
        for(int col = 0; col < board.size(); col++){
            unordered_set<char> s;
            for(int i=0; i<n; i++){
                if(board[i][col] == '.') continue;
                if(s.count(board[i][col])) return false;
                s.insert(board[i][col]);
            }
        }
        for(int square = 0; square < 9; square++){
            unordered_set<char> s;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if(board[row][col] == '.') continue;
                    if(s.count(board[row][col])) return false;
                    s.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
