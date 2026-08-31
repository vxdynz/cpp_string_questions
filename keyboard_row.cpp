class Solution {
public:
    bool isInRow(char c, string row) {
        for (int i = 0; i < row.length(); i++) {
            if (row[i] == c) return true;
        }
        return false;
    }
    
    char toLower(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c - 'A' + 'a';
        }
        return c;
    }
    
    bool canBeTypedInRow(string word, string row) {
        for (int i = 0; i < word.length(); i++) {
            char c = toLower(word[i]);
            if (!isInRow(c, row)) {
                return false;
            }
        }
        return true;
    }
    
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        
        vector<string> result;
        
        for (int i = 0; i < words.size(); i++) {
            if (canBeTypedInRow(words[i], row1) || 
                canBeTypedInRow(words[i], row2) || 
                canBeTypedInRow(words[i], row3)) {
                result.push_back(words[i]);
            }
        }
        
        return result;
    }
};
