class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result = {};
        int depth = 0;
        if (matrix.size() == 0) return result;
        int rows = matrix.size(), columns = matrix[0].size();
        while(true) {
            if (depth > (rows - 1) / 2) break;
            if ((depth << 1) >= columns) break;
            for (int j = depth; j < columns - depth; j++) {
                result.push_back(matrix[depth][j]);
            }
            
            for (int i = depth + 1; i < rows - depth - 1; i++) {
                result.push_back(matrix[i][columns - depth - 1]);
            }
            if (depth >= rows / 2) break;
            for (int j = columns - depth - 1; j >= depth; j--) {
                result.push_back(matrix[rows - depth - 1][j]);
            }
            if (depth >= columns / 2) break;
            for (int i = rows - depth - 2; i >= depth + 1; i--) {
                result.push_back(matrix[i][depth]);
            }
            depth++;
        }
        return result;
        
    }
};
