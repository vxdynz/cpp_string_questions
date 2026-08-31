class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        
        for (int i = 0; i < magazine.length(); i++) {
            count[magazine[i] - 'a'] = count[magazine[i] - 'a'] + 1;
        }
        
        for (int i = 0; i < ransomNote.length(); i++) {
            count[ransomNote[i] - 'a'] = count[ransomNote[i] - 'a'] - 1;
            if (count[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }
        
        return true;
    }
};
