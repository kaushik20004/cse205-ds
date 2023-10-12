class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col= matrix[0].size();
        int count = 0;
        int total = row*col;
        int statingRow = 0;
        int statingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        vector<int> ans;
        while(count < total){
        for(int i=statingCol; count < total && i<=endingCol;i++){
            ans.push_back(matrix[statingRow][i]);
        count++;
        }
        statingRow++;
        for(int i=statingRow ; count < total && i<= endingRow; i++){
             ans.push_back(matrix[i][endingCol]);
             count++;
        }
        endingCol--;
        for(int i=endingCol; count < total && i>=statingCol;i--){
             ans.push_back(matrix[endingRow][i]);
             count++;
        }
        endingRow--;
        for(int i=endingRow; count < total && i>=statingRow;i--){
         ans.push_back(matrix[i][statingCol]);
         count++;
        }
        statingCol++;
    }
    return ans;
    }
};