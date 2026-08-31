class Solution {
public:
    string getSmallestString(vector<string>& words, vector<int>& weights) {
        string result = "";
        
        for (int i = 0; i < words.size(); i++) {
            int wordWeight = 0;
            
            for (int j = 0; j < words[i].length(); j++) {
                int charIndex = words[i][j] - 'a';
                wordWeight = wordWeight + weights[charIndex];
            }
            
            int remainder = wordWeight % 26;
            char mappedChar = 'z' - remainder;
            
            result = result + mappedChar;
        }
        
        return result;
    }
};
