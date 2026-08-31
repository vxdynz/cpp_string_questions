class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    
    int maxSum(string s) {
        int count[26] = {0};
        
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a'] = count[s[i] - 'a'] + 1;
        }
        
        int maxVowel = 0;
        int maxConsonant = 0;
        
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            
            if (isVowel(c)) {
                if (count[i] > maxVowel) {
                    maxVowel = count[i];
                }
            } else {
                if (count[i] > maxConsonant) {
                    maxConsonant = count[i];
                }
            }
        }
        
        return maxVowel + maxConsonant;
    }
};
