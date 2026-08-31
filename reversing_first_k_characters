class Solution {
public:
    string reverseStr(string s, int k) {
        int left = 0;
        int right = k - 1;
        
        if (right >= s.length()) {
            right = s.length() - 1;
        }
        
        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            
            left = left + 1;
            right = right - 1;
        }
        
        return s;
    }
};
