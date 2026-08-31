class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int prevCount = 0;
        int currentCount = 1;
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currentCount = currentCount + 1;
            } else {
                if (prevCount < currentCount) {
                    result = result + prevCount;
                } else {
                    result = result + currentCount;
                }
                prevCount = currentCount;
                currentCount = 1;
            }
        }
        
        if (prevCount < currentCount) {
            result = result + prevCount;
        } else {
            result = result + currentCount;
        }
        
        return result;
    }
};
