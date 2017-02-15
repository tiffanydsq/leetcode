class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int res=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                char above=(i==0)?'.':board[i-1][j];
                char left=(j==0)?'.':board[i][j-1];
                if(board[i][j]=='X'&&above=='.'&&left=='.') res++;
            }
        }
        return res;
    }
};