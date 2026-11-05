class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::array<int,9> rows{};
        std::array<int,9> cols{};
        std::array<int,9> boxs{};

        for(int i=0;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                if(board[i][j]=='.')
                continue;

                int mask=1<<(board[i][j]-'0');
                int b= (i/3)*3+(j/3);

                if(rows[i] & mask || cols[j] & mask || boxs[b] & mask )
                return false;

                rows[i]|=mask;
                cols[j]|=mask;
                boxs[b]|=mask;
            }
        }
        return true;
    }
};
