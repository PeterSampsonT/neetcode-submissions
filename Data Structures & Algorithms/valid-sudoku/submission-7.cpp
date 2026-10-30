class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9]={0};
        int cols[9]={0};
        int boxs[9]={0};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                int val=1<<((int)(board[i][j]-'1'));
                int b=i/3 + 3*(j/3);
                if(rows[i] & val)
                return false;
                else
                rows[i]|=val;
                if(cols[j] & val)
                return false;
                else
                cols[j]|=val;
                if(boxs[b] & val)
                return false;
                else
                boxs[b]|=val;
            }
        }
        return true;
    }
};
