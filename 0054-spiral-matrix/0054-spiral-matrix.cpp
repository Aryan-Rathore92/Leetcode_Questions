class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int total = row*col;
        int count = 0;

        // index initilisation
        int startingRow = 0;
        int startingCol = 0;
        int endingCol = col-1;
        int endingRow = row-1;

        while( count < total ){
            // printing first row
            for(int idx = startingCol; idx <= endingCol && count < total; idx++){
                ans.push_back(matrix[startingRow][idx]);
                count++;
            }
            startingRow++;

            // printing ending coloum
            for(int idx = startingRow; idx <= endingRow && count < total; idx++){
                ans.push_back(matrix[idx][endingCol]);
                count++;
            }
            endingCol--;

            // printing endingRow
            for(int idx = endingCol; idx >= startingCol && count < total; idx--){
                ans.push_back(matrix[endingRow][idx]);
                count++;
            }
            endingRow--;

            // printing starting coloum
            for(int idx = endingRow; idx >= startingRow && count < total; idx--){
                ans.push_back(matrix[idx][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};