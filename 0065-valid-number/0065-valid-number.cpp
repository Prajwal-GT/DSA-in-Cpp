class Solution {
public:
    bool isNumber(string s) {
      bool seenDigit = false;
        bool seenDot = false;
        bool seenExponent = false;
        bool seenDigitAfterE = true;

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];

            if (isdigit(c)) {
                seenDigit = true;
                if (seenExponent) {
                    seenDigitAfterE = true;
                }
            } 
            else if (c == '+' || c == '-') {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
            } 
            else if (c == '.') {
                if (seenDot || seenExponent) {
                    return false;
                }
                seenDot = true;
            } 
            else if (c == 'e' || c == 'E') {
                if (seenExponent || !seenDigit) {
                    return false;
                }
                seenExponent = true;
                seenDigitAfterE = false; 
            } 
            else {
                return false;
            }
        }
        return seenDigit && seenDigitAfterE;  
    }
};