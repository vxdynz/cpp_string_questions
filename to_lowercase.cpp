class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                result = result + (s[i] - 'A' + 'a');
            } else {
                result = result + s[i];
            }
        }
        
        return result;
    }
};
