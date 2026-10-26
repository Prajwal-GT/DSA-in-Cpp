class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<bool>> seen(m, vector<bool>(n, false));
        vector<int> ans;
        int dr[4] = {0, 1, 0, -1};
        int dc[4] = {1, 0, -1, 0};
        int r = 0, c = 0, d = 0;
        for (int i = 0; i < m * n; ++i) {
            ans.push_back(matrix[r][c]);
            seen[r][c] = true;
            int nr = r + dr[d];
            int nc = c + dc[d];
            if (nr < 0 || nr >= m || nc < 0 || nc >= n || seen[nr][nc]) {
                d = (d + 1) % 4;
            }
            r += dr[d];
            c += dc[d];
        }

        return ans;
    }
};