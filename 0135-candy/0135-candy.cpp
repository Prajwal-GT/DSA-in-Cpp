class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n <= 1) {
            return n;
        }
        int total = 1;
        int up = 0;
        int down = 0;
        int peak = 0;

        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                ++up;
                down = 0;
                peak = up;
                total += 1 + up;
            } else if (ratings[i] == ratings[i - 1]) {
                up = 0;
                down = 0;
                peak = 0;
                total += 1;
            } else {
                ++down;
                up = 0;
                total += 1 + down - (peak >= down ? 1 : 0);
            }
        }
        return total;
    }
};