class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        string current = "1";
        for (int step = 2; step <= n; ++step) {
            string next_str = "";
            int len = current.size();
            int i = 0;
            while (i < len) {
                int count = 1;
                while (i + 1 < len && current[i] == current[i + 1]) {
                    ++count;
                    ++i;
                }
                next_str += to_string(count);
                next_str += current[i];
                ++i;
            }

            current = move(next_str);
        }

        return current;
    }
};