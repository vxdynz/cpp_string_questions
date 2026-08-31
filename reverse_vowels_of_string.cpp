class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        return false;
    }
    
    string reverseVowels(string s) {
        string vowels = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                vowels = vowels + s[i];
            }
        }
        
        int vowelIndex = vowels.length() - 1;
        
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[vowelIndex];
                vowelIndex = vowelIndex - 1;
            }
        }
        
        return s;
    }
};
