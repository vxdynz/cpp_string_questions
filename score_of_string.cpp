class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int n = s.length();
        
        for (int i = 0; i < n - 1; i++) {
            int a = s[i];
            int b = s[i + 1];
            
            if (a > b) {
                score = score + (a - b);
            } else {
                score = score + (b - a);
            }
        }
        
        return score;
    }
};
