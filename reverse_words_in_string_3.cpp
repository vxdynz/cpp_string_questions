class Solution {
public:
    void reversePart(string& s, int start, int end) {
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start = start + 1;
            end = end - 1;
        }
    }
    
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                reversePart(s, start, i - 1);
                start = i + 1;
            }
        }
        
        return s;
    }
};
