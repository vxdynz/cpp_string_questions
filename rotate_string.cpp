class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s == goal) {
                return true;
            }
            
            char first = s[0];
            string newS = "";
            
            for (int j = 1; j < n; j++) {
                newS = newS + s[j];
            }
            
            newS = newS + first;
            s = newS;
        }
        
        return false;
    }
};
