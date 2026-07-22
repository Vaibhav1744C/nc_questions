class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows=board.size();
        int cols=board[0].size();
        //checking for rows
        for(int row=0;row<rows;row++){
            unordered_set<char>seen;
            for(int i=0;i<cols;i++){
                if(board[row][i]=='.'){
                    continue;
                }
                if(seen.count(board[row][i])){
                    return false;
                }
                seen.insert(board[row][i]);
            }
        }
        //checking in columns
        for(int col=0;col<cols;col++){
            unordered_set<char>seen;
            for(int i=0;i<rows;i++){
               if(board[i][col]=='.'){
                    continue;
                }
                if(seen.count(board[i][col])){
                    return false;
                }
                seen.insert(board[i][col]);
            }
        }
        // checking in the 3 x 3 subgrid
        for(int square=0;square<9;square++){
            unordered_set<char>seen;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row=(square/3)*3+i;
                    int col=(square%3)*3+j;
                    if(board[row][col]=='.'){
                        continue;
                    }
                    if(seen.count(board[row][col])){
                        return false;
                    }
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
