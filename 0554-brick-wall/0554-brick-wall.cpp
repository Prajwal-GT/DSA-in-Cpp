class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
      unordered_map<long long, int> edge_count;
        int max_edges = 0;

        for (const auto& row : wall) {
            long long prefix_sum = 0;
            int n = row.size();
            for (int i = 0; i < n - 1; ++i) {
                prefix_sum += row[i];
                ++edge_count[prefix_sum];
                max_edges = max(max_edges, edge_count[prefix_sum]);
            }
        }

        return static_cast<int>(wall.size()) - max_edges;
    }
};