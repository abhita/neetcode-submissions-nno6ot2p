class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int numRows = matrix.size();
        int numCols = matrix[0].size();

        int row = findRow(matrix, numRows, target);
        if(row == -1) return false;
        int col = findCol(matrix, row, target);
        if(col == -1) return false;


        return true;




        
    }

    int findRow(vector<vector<int>>& matrix, int numRows, int target){
        int left = 0;
        int right = numRows -1;

        while (left <= right){
            
            int mid = (left+right)/2;
            cout<<"Row "<<mid<<endl;

            if(target >= matrix[mid][0] && target <= matrix[mid][matrix[0].size()-1]){
                return mid;
            } else if( target <= matrix[mid][0]) right = mid-1;
            else left = mid+1;
        }
        return -1;
    }



    int findCol(vector<vector<int>>& matrix, int row, int target){
        int left = 0;
        int right = matrix[row].size() -1;

        while (left <= right){
            
            int mid = (left+right)/2;
            cout<<"Col "<<mid<<endl;
            if(target == matrix[row][mid]){
                return mid;
            } else if( target <= matrix[row][mid]) right = mid-1;
            else left = mid+1;
        }
        return -1;
    }
};
