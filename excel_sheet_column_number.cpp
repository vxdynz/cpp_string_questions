class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int n = columnTitle.length();
        
        for (int i = 0; i < n; i++) {
            result = result * 26;
            result = result + (columnTitle[i] - 'A' + 1);
        }
        
        return result;
    }
};
