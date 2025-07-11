class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rowSet[9];
        unordered_set<char> colSet[9];
        unordered_set<char> boxSet[9];
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];

                if (val == '.') continue;

                if (rowSet[i].count(val)) return false;
                rowSet[i].insert(val);

                if (colSet[j].count(val)) return false;
                colSet[j].insert(val);

                int boxIndex = (i / 3) * 3 + (j / 3);
                if (boxSet[boxIndex].count(val)) return false;
                boxSet[boxIndex].insert(val);
            }
        }

        return true;
    }
};

