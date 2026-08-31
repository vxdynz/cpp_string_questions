class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool isAllowed[26] = {false};
        
        for (int i = 0; i < allowed.length(); i++) {
            isAllowed[allowed[i] - 'a'] = true;
        }
        
        int count = 0;
        
        for (int i = 0; i < words.size(); i++) {
            bool consistent = true;
            
            for (int j = 0; j < words[i].length(); j++) {
                if (isAllowed[words[i][j] - 'a'] == false) {
                    consistent = false;
                    break;
                }
            }
            
            if (consistent == true) {
                count = count + 1;
            }
        }
        
        return count;
    }
};
