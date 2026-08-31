class Solution {
public:
    bool isPrefix(string str1, string str2) {
        if (str1.length() > str2.length()) return false;
        
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                return false;
            }
        }
        
        return true;
    }
    
    bool isSuffix(string str1, string str2) {
        if (str1.length() > str2.length()) return false;
        
        int i = str1.length() - 1;
        int j = str2.length() - 1;
        
        while (i >= 0) {
            if (str1[i] != str2[j]) {
                return false;
            }
            i = i - 1;
            j = j - 1;
        }
        
        return true;
    }
    
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isPrefix(words[i], words[j]) && isSuffix(words[i], words[j])) {
                    count = count + 1;
                }
            }
        }
        
        return count;
    }
};
