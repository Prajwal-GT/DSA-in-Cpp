class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        triangle.reserve(numRows);

        for (int r = 0; r < numRows; ++r) {
            vector<int> row(r + 1, 1);
            for (int c = 1; c < r; ++c) {
                row[c] = triangle[r - 1][c - 1] + triangle[r - 1][c];
            }
            triangle.push_back(move(row));
        }

        return triangle;
    }
};