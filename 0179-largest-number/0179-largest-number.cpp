class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> parts;
        parts.reserve(nums.size());

        for (int n : nums) {
            parts.push_back(to_string(n));
        }

        sort(parts.begin(), parts.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });

        if (parts[0] == "0") return "0";

        string result;
        for (const string& part : parts) {
            result += part;
        }

        return result;
    }
};