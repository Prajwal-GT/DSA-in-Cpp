class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int col = 0; col < n; ++col) {
            int col_max = -1;
            for (int row = 0; row < m; ++row) {
                col_max = max(col_max, matrix[row][col]);
            }
            for (int row = 0; row < m; ++row) {
                if (matrix[row][col] == -1) {
                    matrix[row][col] = col_max;
                }
            }
        }

        return matrix;
    }
};