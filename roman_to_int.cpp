class Solution {
public:

    int getValue(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }
    
    int romanToInt(string s) {
        int result = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            int current = getValue(s[i]);
            int next = 0;
            
            if (i + 1 < n) {
                next = getValue(s[i + 1]);
            }
            
            if (current < next) {
                result = result - current;
            } 
            else {
                result = result + current;
            }
        }
        
        return result;
    }
};
