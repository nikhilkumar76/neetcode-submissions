class Solution {
public:
    int n, m;
    int x[4] = {0, 0, -1, 1};
    int y[4] = {1, -1, 0, 0};
    set<pair<int,int>> path;
    bool isValid(int i, int j,vector<vector<char>>& board, string& word, int length){
        if(i<0 || j<0 || i >= n || j>=m || board[i][j] != word[length] ||path.count({i,j})) return false;
        return true;
    }
    bool dfs(int i, int j, int length, vector<vector<char>>& board, string& word){
        if(length == word.size()) return true;
        if(!isValid(i,j,board, word, length)) return false;
        path.insert({i,j});
        for(int k=0; k<4; k++){
            int row = x[k] + i;
            int col = y[k] + j;
            if(dfs(row, col, length+1, board, word)){
                path.erase({i,j});
                return true;
            }
        }
        path.erase({i, j});
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(dfs(i,j,0,board,word))
                    return true;
            }
        }
        return false;
    }
};
