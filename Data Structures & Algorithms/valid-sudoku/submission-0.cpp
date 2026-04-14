class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> rows , cols;
        map<pair<int,int>,unordered_set<char>> cells;

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){

                int val = board[i][j];
                if (val == '.') continue;

                if(rows[i].find(val) != rows[i].end() ||
                cols[j].find(val) != cols[j].end()
                || cells[{i/3,j/3}].find(val) !=cells[{i/3,j/3}].end()) return false;

                rows[i].insert(val);
                cols[j].insert(val);
                cells[{i/3,j/3}].insert(val);

            
            }
        }

        return true;

        
    }
};
