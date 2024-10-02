class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS=matrix.size(), COLUMNS=matrix[0].size();

        int top=0, bottom = ROWS-1, row;
        while(top <=bottom) {
            row = (top + bottom) /2;
            if(matrix[row][COLUMNS-1] < target) {
                top = row+1;
            } else if(matrix[row][0] > target) {
                bottom = row-1;
            } else {
                break;

            }
        }

        top = 0, bottom = COLUMNS-1;
        int mid;
        while(top <=bottom) {
            mid = (top + bottom) /2;
            if(matrix[row][mid] < target) {
                top = mid + 1;
            } else if(matrix[row][mid] > target) {
                bottom = mid - 1; 

            } else {
                return true;
            }
        }
        return false;
    }
};