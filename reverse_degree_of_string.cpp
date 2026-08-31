class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
        
        for (int i = 0; i < s.length(); i++) {
            int reversedPosition = 'z' - s[i] + 1;
            int stringPosition = i + 1;
            int product = reversedPosition * stringPosition;
            total = total + product;
        }
        
        return total;
    }
};
