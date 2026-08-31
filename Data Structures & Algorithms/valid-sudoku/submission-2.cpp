class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::array<int,9> rows{};
        std::array<int,9> cols{};
        std::array<int,9> boxs{};
        int mask;

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                
                mask=1<<(board[i][j]-'0');

                if(rows[i]&(mask))
                return false;
                if(cols[j]&(mask))
                return false;
                if(boxs[(i/3)*3+(j/3)]&(mask))
                return false;

                rows[i]=rows[i]|mask;
                cols[j]=cols[j]|mask;
                boxs[(i/3)*3+(j/3)]=boxs[(i/3)*3+(j/3)]|mask;
            }
        }
        return true;
    }
};
