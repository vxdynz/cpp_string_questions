class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    
    string removeTrailingVowels(string s) {
        int end = s.length() - 1;
        
        while (end >= 0 && isVowel(s[end])) {
            end = end - 1;
        }
        
        return s.substr(0, end + 1);
    }
};
