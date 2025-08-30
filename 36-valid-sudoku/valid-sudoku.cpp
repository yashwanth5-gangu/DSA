class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>st;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
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
         unordered_set<int>st1;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
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
     
      
        for(int row=0;row<board.size();row+=3){
            for(int col=0;col<board.size();col+=3){
                  unordered_set<char>st3;
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                          if(board[row+i][col+j]=='.')continue;
                        if(st3.find(board[row+i][col+j])!=st3.end()){
                            return false;
                        }
                        else{
                            st3.insert(board[row+i][col+j]);
                        }
                    }
                }
                st3.clear();
            }
        }
           return true;
    }
};