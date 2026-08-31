class Solution {
public:
    string toBinary(int n) {
        if (n == 0) return "0";
        string bin = "";
        while (n > 0) {
            if (n % 2 == 1) {
                bin = "1" + bin;
            } else {
                bin = "0" + bin;
            }
            n = n / 2;
        }
        return bin;
    }
    
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        
        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};
