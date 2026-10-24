class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        if (n == 0) return 0;
        if (m < n) return -1;
        string_view h(haystack);
        string_view nd(needle);

        for (int i = 0; i <= m - n; ++i) {
            if (h.substr(i, n) == nd) {
                return i;
            }
        }
        return -1;
    }
};