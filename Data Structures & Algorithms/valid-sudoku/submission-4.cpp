class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::array<int,9> rows{};
        std::array<int,9> cols{};
        std::array<int,9> boxs{};
        int mask;
        int b;
        int c;
        for(int i=0;i<9;i++)
        {
            c=i/3;
            for(int j=0;j<9;j++)
            {
                b=c*3+(j/3);

                if(board[i][j]=='.')
                continue;

                mask=1<<(board[i][j]-'0');

                if(rows[i]&(mask))
                return false;
                if(cols[j]&(mask))
                return false;
                if(boxs[b]&(mask))
                return false;

                rows[i]=rows[i]|mask;
                cols[j]=cols[j]|mask;
                boxs[b]=boxs[b]|mask;
            }
        }
        return true;
    }
};
