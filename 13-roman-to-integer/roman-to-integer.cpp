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

        int sum = 0;
        int length = s.size();

        for (int i = 0; i < length; ++i) {
           
            int currentVal = romanMap[s[i]];

            if (i + 1 < length && romanMap[s[i]] < romanMap[s[i + 1]]) {
                sum-= currentVal; 
            } else {
                sum += currentVal; 
            }
        }

        return sum ;
    }
};