class Solution {
public:
    int romanToInt(string s) {
    
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int summation = 0;
    
        for (int i = 0; i < s.size(); ++i) {
           
            int currentVal = romanMap[s[i]];

            if (romanMap[s[i]] < romanMap[s[i + 1]]) {
                summation-= currentVal; 
            } else {
                summation += currentVal; 
            }
        }

        return summation ;
    }
};