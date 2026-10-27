class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();
        int i = 0;
        while (i < n) {
            int j = i;
            int line_len = 0;
            while (j < n && line_len + words[j].size() + (j - i) <= maxWidth) {
                line_len += words[j].size();
                ++j;
            }

            string line = "";
            int num_words = j - i;
            int total_spaces = maxWidth - line_len;
            if (j == n || num_words == 1) {
                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k < j - 1) {
                        line += " ";
                    }
                }
                line.append(maxWidth - line.size(), ' ');
            } 
            else {
                int gaps = num_words - 1;
                int spaces_per_gap = total_spaces / gaps;
                int extra_spaces = total_spaces % gaps;

                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k < j - 1) {
                        int spaces_to_add = spaces_per_gap + (k - i < extra_spaces ? 1 : 0);
                        line.append(spaces_to_add, ' ');
                    }
                }
            }
            result.push_back(move(line));
            i = j; 
        }

        return result;
    }
};