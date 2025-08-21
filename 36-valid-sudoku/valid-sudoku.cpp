class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
            if(st.find(board[i][j])!=st.end()){
                return false;
            }
            else{
                st.insert(board[i][j]);
            }
        }
        st.clear();
        }
        unordered_set<char>st1;
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]=='.')continue;
            if(st1.find(board[j][i])!=st1.end()){
                return false;
            }
            else{
                st1.insert(board[j][i]);
            }
        }
        st1.clear();

         }
        
for (int boxRow = 0; boxRow < 9; boxRow += 3) {
    for (int boxCol = 0; boxCol < 9; boxCol += 3) {
        unordered_set<char> boxSet;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char c = board[boxRow + i][boxCol + j];
                if (c == '.') continue;
                if (boxSet.find(c) != boxSet.end()) {
                    return false;
                }
                boxSet.insert(c);
            }
        }
    }
}

        return true;
    }
};